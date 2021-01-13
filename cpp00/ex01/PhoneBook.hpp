#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook;

class PhoneBook
{
    public:
        PhoneBook();
        int getNum();
        void add();
        void search();
    private:
        int num;
        Contact contacts[8];
};

#endif