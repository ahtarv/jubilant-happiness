#include<iostream>
int main()
{
    int age ;
    std::cout<< "enter your age:";
    std::cin>> age ;
    if(age >= 100)
    {
        std::cout<< "You are too old to enter ";
    }
    else if(age >=18)
    {
        std::cout<<"You are allowed onto the site";
    }
    else if (age <0)
    {
        std::cout<<"You haven't been born yet";

    }
    else
    {
        std::cout<<"You are not allowed onto the site";
    }
    return 0;
}