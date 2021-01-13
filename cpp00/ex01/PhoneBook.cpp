#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    num = 0;
}

int PhoneBook::getNum()
{
    return num;
}

void PhoneBook::add()
{
    if (num >= 8) {
        std::cout<<"# PhoneBook is full"<<std::endl;
        return ;
    }
    contacts[num].setInfo(num + 1);
    num++;
}

void PhoneBook::search()
{
    if (num == 0)
    {
        std::cout<<"# PhoneBook is empty"<<std::endl;
        return ;
    }
    std::cout<<std::endl<<"|index     |first name|last name |nickname  |"<<std::endl;
    for (int i = 0; i < num; i++)
        contacts[i].display();
    std::cout<<std::endl<<">>";
    std::string input;
    std::getline(std::cin, input);
    if (input.length() != 1 || input[0] - '0' < 1 || input[0] - '0' > num)
        std::cout<<"# Invalid index"<<std::endl;
    else
        contacts[input[0] - '1'].displayInfo();
}