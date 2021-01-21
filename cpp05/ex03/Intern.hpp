#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef struct  s_pair
{
    std::string name;
    Form *(*func)(std::string const & target);
}               t_pair;


class Intern
{
    private:
        static t_pair const pairs[3];
    public:
        Intern();
        Intern(Intern const &i);
        Intern& operator=(Intern const & i);
        virtual ~Intern();
        Form *makeForm(std::string name, std::string target);
};

#endif