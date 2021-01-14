#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::cout<<*ptr<<std::endl;
    std::string &ref = str;
    std::cout<<ref<<std::endl;
}