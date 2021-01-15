#include <iostream>

void memoryLeak()
{
    std::string*    panther = new std::string("String panther");
    std::cout<<*panther<<std::endl;
    delete panther;
}


/*void memoryLeak()
{
    std::string*panther = new std::string("String panther");
    std::cout<<*panther<<std::endl;
}*/


int main()
{
    memoryLeak();
    return 0;
}