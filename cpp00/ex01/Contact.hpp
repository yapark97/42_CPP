#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact;

class Contact
{
public:
    Contact();
    void display();
    void displayInfo();
    void setInfo(int n);

private:
    int index;
    std::string fields_info[11];
    const std::string Fields[11] = {
        "First Name",
        "Last Name",
        "Nickname",
        "Login",
        "Address",
        "E-mail",
        "Phone",
        "Birthday",
        "Favorite Meal",
        "Underwear Color",
        "Darkest Secret"
    };
};

#endif