#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
private:
    std::vector<int> v;
    unsigned int n;
    Span();
public:
    Span(unsigned int n);
    Span(Span const &s);
    Span& operator=(Span const &s);
    virtual ~Span();
    std::vector<int> getV() const;
    unsigned int getN() const;
    void addNumber(int k);
    int shortestSpan();
    int longestSpan();

    class SpanIsFullException : std::exception {
        virtual const char* what() const throw() {
            return "Span: Span is already full";
        }
    };
    class NotEnoughNumbersException : std::exception {
        virtual const char* what() const throw() {
            return "Span: Span has zero or one number";
        }
    };
};

#endif