#include "Serialization.hpp"

int main()
{
    Serialization s;
    void *vData = s.serialize();
    Data *data = s.deserialize(vData);
    std::cout<<std::endl<<"* Deserialize data *"<<std::endl;
    std::cout<<data->s1<<std::endl;
    std::cout<<data->n<<std::endl;
    std::cout<<data->s2<<std::endl;
    delete data;
}