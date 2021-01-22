#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <string>
#include <random>

typedef struct Data
{
    std::string s1;
    int n;
    std::string s2;
} Data;

class Serialization
{
    public:
        Serialization() {}
        Serialization(const Serialization &s);
        Serialization& operator=(const Serialization &s);
        virtual ~Serialization() {}
        void *serialize(void);
        Data *deserialize(void *raw);
        std::string randomString();
        int randomInt();
};

#endif