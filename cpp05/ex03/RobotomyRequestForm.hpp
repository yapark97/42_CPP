#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <fstream>

class RobotomyRequestForm : public Form
{
    private:
        std::string const target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string const target);
        RobotomyRequestForm(RobotomyRequestForm const & sc);
        RobotomyRequestForm& operator=(RobotomyRequestForm const & sc);
        virtual ~RobotomyRequestForm();
        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
};

#endif