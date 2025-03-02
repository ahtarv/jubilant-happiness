#include<iostream>
#include<cmath>
int main()
{
    int age;
    std::cout<<"What is your age? ";
    std::cin>>age ;
    if (age>=18)
    {
        std::cout<< "You are allowed onto the site";
    }
    else
    {
        std::cout<<"You are not allowed onto the site";
    }
    return 0;
}