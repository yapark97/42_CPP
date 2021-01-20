#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim {
public:
    Victim() = delete;
    Victim(std::string name);
    Victim(Victim &vt);
    Victim& operator=(const Victim &vt);
    virtual ~Victim();
    std::string getName() const;
    virtual void getPolymorphed() const;
protected:
    std::string name;
};

std::ostream& operator<<(std::ostream &os, const Victim &vt);

#endif