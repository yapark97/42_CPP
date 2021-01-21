#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <fstream>

class PresidentialPardonForm : public Form
{
    private:
        std::string const target;
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(std::string const target);
        PresidentialPardonForm(PresidentialPardonForm const & sc);
        PresidentialPardonForm& operator=(PresidentialPardonForm const & sc);
        virtual ~PresidentialPardonForm();
        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
};

#endif