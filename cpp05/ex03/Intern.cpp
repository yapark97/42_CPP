#include "Intern.hpp"

static Form *createSCForm(std::string const &target) { return (new ShrubberyCreationForm(target)); }
static Form *createRRForm(std::string const &target) { return (new RobotomyRequestForm(target)); }
static Form *createPPForm(std::string const &target) { return (new PresidentialPardonForm(target)); }

t_pair const Intern::pairs[3] =
    {
        {"shrubbery creation", &createSCForm},
        {"robotomy request", &createRRForm},
        {"presidential pardon", &createPPForm}};

Intern::Intern() {}

Intern::Intern(Intern const &i)
{
    *this = i;
}

Intern& Intern::operator=(Intern const &i)
{
    (void)i;
    return *this;
}

Intern::~Intern() {}

Form* Intern::makeForm(std::string name, std::string target)
{
    for (int i = 0; i < 3; i++) {
        if (pairs[i].name == name) {
            std::cout<<"Intern creates "<<name<<std::endl;
            return pairs[i].func(target);
        }
    }
    std::cout<<"Intern failed to create "<<name<<std::endl;
    return 0;
}