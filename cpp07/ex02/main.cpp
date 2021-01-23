#include "Array.hpp"

int main(void)
{
    Array<int> arr1(5);
    std::cout<<"* initialized arr1 by 0 *"<<std::endl;
    std::cout<<"arr1[0] = "<<arr1[0]<<std::endl<<std::endl; //0
    try {
        arr1[5] = 1; //error
    } catch (std::exception const &e){
        std::cerr << e.what() << std::endl<<std::endl;
    }

    Array<char> arr2(3);
    std::cout<<"* generated arr2 with size 3 *"<<std::endl;
    std::cout<<"arr2.size() = "<<arr2.size()<<std::endl; //3
    for (unsigned int i = 0; i < arr2.size(); i++)
        arr2[i] = 'a' + i;
    for (unsigned int i = 0; i < arr2.size(); i++)
        std::cout<<arr2[i]<<" ";
    std::cout<<std::endl<<std::endl;

    Array<std::string> arr3(2);
    std::cout<<"* arr3 for string *"<<std::endl;
    arr3[0] = "hello";
    arr3[1] = "world!";
    std::cout<<arr3[0]<<" "<<arr3[1]<<std::endl;
    return 0;
}