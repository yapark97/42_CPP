#include "Contact.hpp"

Contact::Contact()
{
}

void Contact::display()
{
    std::cout << "|" << index;
    std::cout.width(10);
    for (int i = 0; i < 3; i++)
    {
        std::cout << "|";
        if (fields_info[i].length() <= 10)
        {
            std::cout.width(10);
            std::cout << fields_info[i];
        }
        else
        {
            std::cout.width(9);
            std::cout << fields_info[i].substr(0, 9) << ".";
        }
    }
    std::cout << "|" << std::endl;
}

void Contact::setInfo(int n)
{
    index = n;
    for (int i = 0; i < 11; i++)
    {
        std::cout << Fields[i] << " : ";
        std::getline(std::cin, fields_info[i]);
    }
}

void Contact::displayInfo()
{
    for (int i = 0; i < 11; i++)
    {
        std::cout << Fields[i] << " : ";
        std::cout << fields_info[i] << std::endl;
    }
}