#include<iostream>
int main()
{
    int number, total ;
    do{
        std::cout<<"Enter a number #:";
        std::cin>> number;
        break;
    
    }while(number<32526);
    total = number * 2;
    do{
        std::cin>> total;
    }while(number < 32000);
    return 0;
}