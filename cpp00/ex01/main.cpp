#include "PhoneBook.hpp"

int main() {
    PhoneBook phoneBook;
    std::string method;
    std::cout<<"# Welcome to My Awesome PhoneBook!"<<std::endl;
    while(true) {
        std::cout<<std::endl<<"# Methods : ADD / SEARCH / EXIT   "<<std::endl;
        std::cout<<"#                  contacts "<<phoneBook.getNum()<<"/8"<<std::endl<<">>";
        std::getline(std::cin, method);
        if (method == "ADD")
            phoneBook.add();
        else if (method == "SEARCH")
            phoneBook.search();
        else if (method == "EXIT") {
            std::cout<<"# Bye"<<std::endl;
            break ;
        }
        else
            std::cout<<"# Invalid method"<<std::endl;
    }
}