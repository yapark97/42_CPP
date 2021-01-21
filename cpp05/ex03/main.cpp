#include "Intern.hpp"

int main()
{
    Intern intern;
    Bureaucrat manager("manager", 10);

    Form *test = intern.makeForm("test form", "test target");
    Form *sc = intern.makeForm("shrubbery creation", "shrubbery");
    std::cout<<*sc<<std::endl;

    manager.signForm(*sc);
    std::cout<<*sc<<std::endl;

    manager.executeForm(*sc);

    if (test) delete(test);
    if (sc) delete(sc);
}