#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{
private:
    T *arr;
    size_t s;
public:
    Array() { arr = new T[0](); s = 0; } //create an empty array
    Array(unsigned int n) { arr = new T[n](); s = n; }
    Array(Array const &a) { *this = a; }
    Array& operator=(Array const &a) {
        if (arr) delete[] arr;
        arr = new T[a.size()]();
        s = a.size();
        for (unsigned int i = 0; i < s; i++)
            arr[i] = a[i];
        return *this;
    }
    virtual ~Array() { delete[] arr; }
    unsigned int size() const { return s; }
    class OutOfLimitsException : public std::exception
    {
        virtual const char *what() const throw() {
            return "Array: Element out of limits";
        }
    };
    T &operator[](unsigned int index) { 
        if (index >= s) throw Array::OutOfLimitsException();
        T &ref = arr[index];
        return ref;
    }
};

#endif