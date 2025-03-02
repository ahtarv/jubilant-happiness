#include<iostream>
int main()
{
    char op;
    double num1, num2, result ;
    std::cout<<"*********CALCULATOR********\n";
    std::cout<<"Enter either +, -, *, /";
    std::cin>>op ;
    
    std::cout << "Enter number one:";
    std::cin>>num1;
    std::cout<<"Enter number 2:";
    std::cin>>num2;

    switch(op)
    {
        case '+':
            result = num1 + num2;
            std::cout<<"Your result is "<<result;
            break;
        case '-' :
            result = num1 - num2;
            std::cout<<"Your result is "<<result;
            break;
        case '*' :
            result = num1 * num2 ;
            std::cout<<"Your result is "<<result;
            break;
        case '/' :
            result = num1 / num2;
            std::cout<<"Your result is "<<result;
            break;
        default:
            std::cout<<"Please enter a valid operator:";
    }
    return 0;
}