#include <iostream>

int ft_strlen(char *s)
{
    if (!s) return 0;
    int i = -1;
    while (s[++i]) continue ;
    return i;
}

char ft_toupper(char c)
{
    return ((c >= 97 && c <= 122 ) ? c - 32 : c);
}

int main(int argc, char **argv)
{
    int i = 0;
    while (++i < argc) {
        int len = ft_strlen(argv[i]);
        for (int j = 0; j < len; j++)
            std::cout<<ft_toupper(argv[i][j]);
    }
    if (i == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout<<std::endl;
    return 0;
}