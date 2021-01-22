#include "Converter.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
        return 1;
    
    Converter c((std::string)argv[1]);
    c.findType();
    c.setVal();
    c.printType();
}