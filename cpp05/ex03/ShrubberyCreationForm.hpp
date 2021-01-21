#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
        std::string const target;
        static std::string const asciiTree;
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string const target);
        ShrubberyCreationForm(ShrubberyCreationForm const & sc);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const & sc);
        virtual ~ShrubberyCreationForm();
        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
};

#endif