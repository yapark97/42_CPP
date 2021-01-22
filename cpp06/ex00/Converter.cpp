#include "Converter.hpp"

std::string const Converter::PseudoLiteralF[4] = {"inf", "-inff", "+inff", "nanf"};
std::string const Converter::PseudoLiteralD[4] = {"inf", "-inf", "+inf", "nan"};

Converter::Converter(std::string const val)
{
    this->val = val;
    type = -1;
    for (int i = 0; i < 4; i++)
        status[i] = OK;
}

Converter::Converter(Converter const &con)
{
    *this = con;
}

Converter &Converter::operator=(Converter const &con)
{
    val = con.getVal();
    return *this;
}

Converter::~Converter() {}

std::string Converter::getVal() const
{
    return val;
}

void Converter::findType()
{
    unsigned long i = 0;
    int dotNum = 0;
    if (val.length() == 1 && (val[i] < '0' || val[i] > '9'))
    {
        type = C;
        return;
    }
    if (val[i] == '+' || val[i] == '-')
        i++;
    if (val[i] == '.') {
        dotNum++;
        i++;
    }
    if (val[i] >= '0' && val[i] <= '9')
        type = I;
    while (i < val.length())
    {
        if (val[i] == '.')
            dotNum++;
        else if (val[i] < '0' || val[i] > '9')
        {
            if (type == I && val[i] == 'f' && !val[i + 1])
                type = F;
            else
                type = -1;
        }
        i++;
    }
    if (dotNum == 1 && type == I)
        type = D;
    else if (dotNum > 1)
        type = -1;
}

void Converter::setVal()
{
    if (type == C)
    {
        cVal = val[0];
        iVal = static_cast<int>(cVal);
        fVal = static_cast<float>(cVal);
        dVal = static_cast<double>(cVal);
    }
    else if (type == I)
    {
        iVal = stoi(val); //???써도됨?
        cVal = static_cast<char>(iVal);
        fVal = static_cast<float>(iVal);
        dVal = static_cast<double>(iVal);
    }
    else if (type == F)
    {
        fVal = stof(val);
        iVal = static_cast<int>(fVal);
        cVal = static_cast<char>(iVal);
        dVal = static_cast<double>(fVal);
    }
    else if (type == D)
    {
        dVal = stod(val);
        iVal = static_cast<int>(dVal);
        cVal = static_cast<char>(iVal);
        fVal = static_cast<float>(dVal);
    }
    else
        for (int i = 0; i < 4; i++)
            status[i] = IMPOSSIBLE;
    if (status[C] == OK && (cVal < 32 || cVal > 127))
        status[C] = NON_DISPLAYABLE;
}

void Converter::printType()
{
    std::cout << "char: ";
    if (status[C] == NON_DISPLAYABLE)
        std::cout << "Non displayable" << std::endl;
    else if (status[C] == IMPOSSIBLE)
        std::cout << "impossible" << std::endl;
    else
        std::cout << cVal << std::endl;
    std::cout << "int: ";
    if (status[I] == IMPOSSIBLE)
        std::cout << "impossible" << std::endl;
    else
        std::cout << iVal << std::endl;
    std::cout << "float: ";
    int i = 4;
    if (status[I] == IMPOSSIBLE)
    {
        for (i = 0; i < 4; i++)
            if (PseudoLiteralF[i] == val || PseudoLiteralD[i] == val)
                break;
        if (i < 4)
            std::cout << PseudoLiteralF[i] << std::endl;
        else
            std::cout << "impossible" << std::endl;
    }
    else
    {
        if (!(fVal * 10 - (int)(fVal * 10)))
        {
            std::cout << std::fixed;
            std::cout.precision(1);
        }
        std::cout << fVal << "f" << std::endl;
    }
    std::cout << "double: ";
    if (status[I] == IMPOSSIBLE)
    {
        if (i < 4)
            std::cout << PseudoLiteralD[i] << std::endl;
        else
            std::cout << "impossible" << std::endl;
    }
    else
        std::cout << dVal << std::endl;
}