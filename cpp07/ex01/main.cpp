#include "iter.hpp"

void print(int k) {
    std::cout<<k<<" ";
}

void print(char c) {
    std::cout<<c<<" ";
}

void print(std::string s) {
    std::cout<<s<<" ";
}

int main()
{
    int arr1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char arr2[7] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    std::string arr3[3] = {"hello", "world", "!"};

    iter(arr1, 10, print);
    std::cout<<std::endl;
    iter(arr2, 7, print);
    std::cout<<std::endl;
    iter(arr3, 3, print);
    std::cout<<std::endl;
}