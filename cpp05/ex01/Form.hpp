#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    std::string const name;
    bool _signed;
    int const gradeToSign;
    int const gradeToExecute;
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

    std::string const getName() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    bool isSigned() const;
    void beSigned(Bureaucrat const & b);
};

std::ostream& operator<<(std::ostream& os, Form &f);

#endif