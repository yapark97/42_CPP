#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
public:
    Peon() = delete;
    Peon(std::string name);
    Peon(Peon &p);
    Peon& operator=(const Peon &p);
    virtual ~Peon();
    void getPolymorphed() const;
private:
};

#endif