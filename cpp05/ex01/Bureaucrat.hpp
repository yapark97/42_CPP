#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    std::string const name;
    int grade; //1~150
    Bureaucrat();
public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &b);
    Bureaucrat &operator=(Bureaucrat const &b);
    virtual ~Bureaucrat();

    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };

    std::string const &getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(Form &f);
};

std::ostream& operator<<(std::ostream &os, Bureaucrat &b);

#endif