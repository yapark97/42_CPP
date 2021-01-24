#include "span.hpp"

Span::Span(unsigned int n) : n(n) {}

Span::Span(Span const &s) { *this = s; }

Span& Span::operator=(Span const &s) {
    v.clear();
    v = s.getV();
    n = s.getN();
    return *this;
}

Span::~Span() { v.clear(); }

std::vector<int> Span::getV() const { return v; }

unsigned int Span::getN() const { return n; }

void Span::addNumber(int k) {
    if (v.size() >= n) throw Span::SpanIsFullException();
    v.push_back(k);
}

int Span::shortestSpan() {
    if (v.size() <= 1) throw Span::NotEnoughNumbersException();
    sort(v.begin(), v.end());
    int min = v[1] - v[0];
    for (int i = 1; i < v.size() - 1; i++)
        if (min > v[i + 1] - v[i])
            min = v[i + 1] - v[i];
    return min;
}

int Span::longestSpan() {
    sort(v.begin(), v.end());
    return v.back() - v.front();
}