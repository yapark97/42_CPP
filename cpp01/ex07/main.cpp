#include "Replace.hpp"

int ft_perror(std::string str)
{
    std::cout<<str;
    return 1;
}

int main(int argc, char *argv[])
{
    std::ifstream ifs;
    std::ofstream ofs;

    if (argc != 4)
        return ft_perror(ERR1);
    ifs.open(argv[1]);
    ofs.open((std::string)argv[1] + ".rep");
    if (!ifs.is_open() || !ofs.is_open())
        return ft_perror(ERR2);

    std::string line, str1 = (std::string)argv[2], str2 = (std::string)argv[3];
    int pos;
    while (getline(ifs, line)) {
        while ((pos = line.find(str1)) != -1) {
            line.replace(pos, str1.length(), str2);
        }
        ofs<<line;
    }
    return 0;
}