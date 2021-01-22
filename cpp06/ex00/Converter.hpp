#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <string>
#include <cctype>

#define C 0
#define I 1
#define F 2
#define D 3

#define OK 0
#define NON_DISPLAYABLE 1
#define IMPOSSIBLE 2

class Converter
{
    private:
        static std::string const PseudoLiteralF[4];
        static std::string const PseudoLiteralD[4];
        std::string val;
        int type;
        char cVal;
        int iVal;
        float fVal;
        double dVal;
        int status[4];
        Converter();
    public:
        Converter(std::string const val);
        Converter(Converter const &con);
        Converter& operator=(Converter const &con);
        virtual ~Converter();
        std::string getVal() const;
        void findType();
        void setVal();
        void printType();
};

#endif