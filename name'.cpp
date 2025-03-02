#include<iostream>
std::string concatstrings(std::string string1,, std::string string2);

int main()
{
    std::string firstName = "Atharv";
    std::string lastName = "Patil";
    std::string fullName = concatstrings(firstName, lastName);
    
    std::cout<<"Hello"<< fullName;
    return 0;
}
std::string concatstrings(std::string string1,, std::string string2);
{
    return string1 + "" + string2;
}