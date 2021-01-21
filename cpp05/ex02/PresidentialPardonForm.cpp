#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const target)
:Form("Presidential Pardon", 25, 5), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &sc)
:Form(sc.getName(), sc.getGradeToSign(), sc.getGradeToExecute())
{
    *this = sc;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &sc)
{
    (void)sc;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {};

std::string PresidentialPardonForm::getTarget() const
{
    return target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::cout<<"<"<<target<<"> has been pardoned by Zafod Beeblebrox"<<std::endl;
}