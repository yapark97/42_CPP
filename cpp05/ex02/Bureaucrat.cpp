#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
    std::cout<<"* <"<< name<<"> successfully created *\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const &b) : name(b.getName())
{
    *this = b;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &b)
{
    grade = b.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat() {}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Bureaucrat: Grade too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Bureaucrat: Grade too Low";
}

std::string const & Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::decrementGrade()
{
    if (grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        grade++;
}

void Bureaucrat::incrementGrade()
{
    if (grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    else
        grade--;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &b)
{
    return os<<"<"<<b.getName()<<">, bureaucrat grade <"<<b.getGrade()<<">.\n";
}

void Bureaucrat::signForm(Form &f)
{
    try {
        std::cout<<"<"<<name<<"> ";
        f.beSigned(*this);
        std::cout<<"signs <"<<f.getName()<<">"<<std::endl;
    } catch (std::exception &e) {
        std::cout<<"cannot sign <"<<f.getName()<<"> because <";
        std::cerr<<e.what();
        std::cout<<">"<<std::endl;
    }
}

void Bureaucrat::executeForm(Form const & f)
{
    try {
        f.execute(*this);
        std::cout<<"<"<<name<<"> "<<"executes <"<<f.getName()<<">"<<std::endl;
    } catch (std::exception &e) {
        std::cout<<"<"<<name<<"> "<<"cannot execute <"<<f.getName()<<"> because <";
        std::cerr<<e.what();
        std::cout<<">"<<std::endl;
    }
}