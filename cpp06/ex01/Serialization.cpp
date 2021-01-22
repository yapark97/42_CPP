#include "Serialization.hpp"

Serialization::Serialization(const Serialization &s) {
    *this = s;
}

Serialization& Serialization::operator=(const Serialization &s) {
    (void) s;
    return *this;
}

int Serialization::randomInt() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(-2147483648, 2147483647);
    return dis(gen);
}

std::string Serialization::randomString() {
    std::string ret = "";
    std::random_device rd;
    std::mt19937 gen(rd());
    int range = '9' - '0' + 'Z' - 'A' + 'z' - 'a' + 2;
    std::uniform_int_distribution<int> dis(0, range);
    for (int i = 0; i < 8; i++) {
        char temp = dis(gen);
        if (temp <= 9) //0~9 > 48~57
            temp += '0';
        else if (temp <= 35) //10~35 > 65~90
            temp += 'A' - 10;
        else //36~61? > 97~122
            temp += 'a' - 36;
        ret += temp;
    }
    return ret;
}

void* Serialization::serialize(void) {
    Data *data = new Data();
    data->s1 = randomString();
    data->s2 = randomString();
    data->n = randomInt();
    std::cout<<"* Serialize data *"<<std::endl;
    std::cout<<data->s1<<std::endl;
    std::cout<<data->n<<std::endl;
    std::cout<<data->s2<<std::endl;
    return reinterpret_cast<void*>(data);
}

Data* Serialization::deserialize(void *raw) {
    Data *data = reinterpret_cast<Data*>(raw);
    return data;
}