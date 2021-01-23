#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template<typename T> void iter(T arr[], size_t len, void (*fp)(T)) {
    for (unsigned int i = 0; i < len; i++)
        (*fp)(arr[i]);
}

#endif