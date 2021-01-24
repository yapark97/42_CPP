#include "span.hpp"
#include <random>

int main()
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout<<"***"<<std::endl;

    Span sp2 = Span(10000);
    sp2.addNumber(0);
    try{
        int k = sp2.shortestSpan();
    } catch (std::exception const &e) {
        std::cerr<<e.what()<<std::endl;
    } //throw error
    sp2.addNumber(1);
    int min = 0, max = 1;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 1000000);
    for (int i = 0; i < 9998; i++) {
        int temp = dis(gen);
        min = temp < min ? temp : min;
        max = temp > max ? temp : max;
        sp2.addNumber(temp);
    }
    try{
        sp2.addNumber(0);
    } catch (std::exception const &e) {
        std::cerr<<e.what()<<std::endl;
    } //throw error
    std::cout<<std::endl;
    std::cout<<"min : "<<min<<std::endl;
    std::cout<<"max : "<<max<<std::endl;
    std::cout << "shortest span : " << sp2.shortestSpan() << std::endl;
    std::cout << "longest span : "<< sp2.longestSpan() << std::endl;
    return 0;
}