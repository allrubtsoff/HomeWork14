#include <iostream>
#include <string>

int main()
{
    std::string name;
    name = "alexander";
    char ch = name[0];
    char ch2 = name[8];

    std::cout << name << "\n" 
        << name.length() << "\n" 
        << name[0] << "\n" 
        << name[8] <<"\n";
    
}

