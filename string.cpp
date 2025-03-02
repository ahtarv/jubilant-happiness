#include<iostream>
std::string conc(std::string string1, std::string string2){
    return string1 + " " + string2;
}
int main()
{
    std::string firstName = "Atharv";
    std::string lastName = "Patil";
    std::string fullName = conc(firstName, lastName);
    std::cout<<fullName;

     
    return 0;
}