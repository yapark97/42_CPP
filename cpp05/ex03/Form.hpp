#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
protected:
    std::string const name;
    bool _signed;
    int const gradeToSign;
    int const gradeToExecute;
private:
    Form();
public:
    Form(std::string const name, int const gradeToSign, int const gradeToExecute);
    Form(Form const &f);
    Form& operator=(Form const &f);
    virtual ~Form();

    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class UnsignedFormException : public std::exception
    {
        virtual const char *what() const throw();
    };

    std::string const getName() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    bool isSigned() const;
    void beSigned(Bureaucrat const & b);
    virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, Form &f);

#endif