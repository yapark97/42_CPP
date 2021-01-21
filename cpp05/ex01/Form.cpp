#include "Form.hpp"

Form::Form(std::string const name, int const gradeToSign, int const gradeToExecute)
: name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    _signed = false;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &f)
: name(f.getName()), gradeToSign(f.getGradeToSign()), gradeToExecute(f.getGradeToExecute())
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
    *this = f;
}

Form & Form::operator=(Form const &f)
{
    this->_signed = f.isSigned();
    return *this;
}

Form::~Form() {}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Form: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Form: Grade too Low";
}

std::string const Form::getName() const
{
    return name;
}

int Form::getGradeToSign() const
{
    return gradeToSign;
}

int Form::getGradeToExecute() const
{
    return gradeToExecute;
}

bool Form::isSigned() const
{
    return _signed;
}

void Form::beSigned(Bureaucrat const &b)
{
    if (b.getGrade() <= gradeToSign)
        _signed = true;
    else
        throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, Form &f)
{
    return os<<"<"<<f.getName()<<">, grade to sign <"<<f.getGradeToSign()<<">, signed <"<<f.isSigned()<<">.\n";
}