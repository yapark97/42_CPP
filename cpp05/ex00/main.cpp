#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat zero("zero", 0);
    } catch (std::exception const &e) {
        std::cerr<<e.what()<<std::endl;
    }
    std::cout<<std::endl;

    Bureaucrat yapark("yapark", 1);
    std::cout<<yapark;
    try {
        yapark.incrementGrade();
    } catch (std::exception const &e) {
        std::cerr<<e.what()<<std::endl;
    }
    std::cout<<std::endl;

    for (int i = 1; i < 150; i++)
        yapark.decrementGrade();
    std::cout<<yapark<<std::endl;

    try {
        yapark.decrementGrade();
    } catch (std::exception const &e) {
        std::cerr<<e.what()<<std::endl;
    }
}