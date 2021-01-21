#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat three("three", 3);
    Bureaucrat four("four", 4);
    std::cout<<std::endl;

    try {
        Form formA("form level 200", 200, 10);
        std::cout<<formA;
    } catch (std::exception const &e) {
        std::cerr<<e.what()<<std::endl;
    }
    std::cout<<std::endl;

    try {
        Form formB("form level 3", 3, 10);
        std::cout<<formB;
        four.signForm(formB);
        std::cout<<formB<<std::endl;
        three.signForm(formB);
        std::cout<<formB;
    } catch (std::exception const &e) {
        std::cerr<<e.what()<<std::endl;
    }
}