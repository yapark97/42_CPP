#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const target)
:Form("Roboto my Request", 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &sc)
:Form(sc.getName(), sc.getGradeToSign(), sc.getGradeToExecute())
{
    *this = sc;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &sc)
{
    (void)sc;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {};

std::string RobotomyRequestForm::getTarget() const
{
    return target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    srand(time(NULL));
    if ((rand() % 100 > 50))
        std::cout<<"<"<<target<<"> has been robotomized successfully."<<std::endl;
    else
        std::cout<<"<"<<target<<"> robotomization failed."<<std::endl;
}