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
    std::cout<<"***"<<std::endl;
    std::list<int> l;
    l.push_back(0);
    l.push_back(1);
    l.insert(l.begin(), 42);
    std::list<int>::iterator iter2 = easyfind(l, 42);
    std::cout << *iter2 << std::endl;
    try {
        iter2 = easyfind(l, 5);
        std::cout<< *iter <<std::endl;
    } catch (std::exception const &e) {
        std::cerr<<e.what()<<std::endl;
    }
    return 0;
}