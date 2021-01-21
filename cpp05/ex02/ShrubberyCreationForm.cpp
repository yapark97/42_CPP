#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::asciiTree = \
    "          .     .  .      +     .      .          .\n\
     .       .      .     #       .           .\n\
        .      .         ###            .      .      .\n\
      .      .   \"#:. .:##\"##:. .:#\"  .      .\n\
          .      . \"####\"###\"####\"  .\n\
       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n\
  .             \"#########\"#########\"        .        .\n\
        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n\
     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n\
                .\"##\"#####\"#####\"##\"           .      .\n\
    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n\
      .     \"#######\"##\"#####\"##\"#######\"      .     .\n\
    .    .     \"#####\"\"#######\"\"#####\"    .      .\n\
            .     \"      000      \"    .     .\n\
       .         .   .   000     .        .       .\n\
.. .. ..................O000O........................ ......\n";

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target)
:Form("Shrubbery Creation", 145, 137), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &sc)
:Form(sc.getName(), sc.getGradeToSign(), sc.getGradeToExecute())
{
    *this = sc;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &sc)
{
    (void)sc;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {};

std::string ShrubberyCreationForm::getTarget() const
{
    return target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::ofstream ofs;
    ofs.open(target + "_shrubbery");
    if (!ofs.is_open() || ofs.bad()) //open/reading/writing error
        return ;
    ofs<<asciiTree;
}