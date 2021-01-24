#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class cannotFindException : public std::exception {
    virtual const char* what() const throw() {
        return "EasyFind: cannot find";
    }
};

template <typename T>
typename T::iterator easyfind(T &t, int k) {
    typename T::iterator ret = find(t.begin(), t.end(), k);
    if (ret == t.end()) throw cannotFindException();
    return ret;
}

#endif