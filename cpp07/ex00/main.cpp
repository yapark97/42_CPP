#include "whatever.hpp"

class Awesome
{
public:
    Awesome(int n) : _n(n) {}
    bool operator==(Awesome const &rhs) { return (this->_n == rhs._n); }
    bool operator!=(Awesome const &rhs) { return (this->_n != rhs._n); }
    bool operator>(Awesome const &rhs) { return (this->_n > rhs._n); }
    bool operator<(Awesome const &rhs) { return (this->_n < rhs._n); }
    bool operator>=(Awesome const &rhs) { return (this->_n >= rhs._n); }
    bool operator<=(Awesome const &rhs) { return (this->_n <= rhs._n); }
    int getN() const { return _n; }

private:
    int _n;
};

std::ostream & operator<<(std::ostream &os, Awesome const &a) {
    return os<<a.getN();
}

int main(void)
{
    int a = 2;
    int b = 3;

    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl<<std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl<<std::endl;

    Awesome e(5);
    Awesome f(10);
    ::swap(e, f);
    std::cout << "e = "<<e<<", f = "<<f<<std::endl;
    std::cout<<"min(e, f) = "<<::min(e, f)<<std::endl;
    std::cout<<"max(e, f) = "<<::max(e, f)<<std::endl;

    return 0;
}