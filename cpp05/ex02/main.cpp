#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    //initialization
    Bureaucrat boss("boss", 1);
    Bureaucrat manager("manager", 10);
    Bureaucrat staff("staff", 50);
    ShrubberyCreationForm sc("shrubbery");
    RobotomyRequestForm rr("roboto");
    PresidentialPardonForm pp("presidential");
    std::cout << std::endl;

    //Shrubbery Creation Form
    std::cout << "<Manager> : Execute this form, Staff." << std::endl;
    std::cout << sc << std::endl;

    try
    {
        staff.executeForm(rr);
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "<Manager> : You need to sign it first." << std::endl
              << std::endl;

    staff.signForm(sc);
    std::cout << sc;
    staff.executeForm(sc);
    std::cout << "<Manager> : Great job!" << std::endl
              << std::endl;

    //Roboto my Request Form
    std::cout << "<Manager> : This too." << std::endl;
    std::cout << rr << std::endl;

    try
    {
        staff.signForm(rr);
        std::cout << rr;
        staff.executeForm(rr);
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "<Staff> : It seems like I cannot execute this form." << std::endl;
    std::cout << "<Manager> : Ok. Let me do this." << std::endl
              << std::endl;

    manager.executeForm(rr);
    std::cout << std::endl;

    std::cout << "<Manager> : We have one more form." << std::endl;
    std::cout << pp << std::endl;

    try
    {
        manager.signForm(pp);
        std::cout << pp;
        manager.executeForm(pp);
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "<Manager> : Now we need our boss." << std::endl;
    std::cout << std::endl;

    boss.executeForm(pp);
    std::cout << "<Boss> : All done." << std::endl;
}