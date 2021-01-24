#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);
    std::vector<int>::iterator iter = easyfind(v, 8);
    std::cout << *iter << std::endl;
    try {
        iter = easyfind(v, 10);
        std::cout<< *iter <<std::endl;
    } catch (std::exception const &e) {
        std::cerr<<e.what()<<std::endl;
    }
    return 0;
}