#include<iostream>
int main()
{
    int a;
    std::string name;
    std::cout<<"Enter your name: ";
    std::getline(std::cin, name);
    a = name.length();
    std::cout<<"The no. of characters in this is "<< a ;
    return 0;
}