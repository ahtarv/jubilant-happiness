#include<iostream>
int main()
{
    double temp1, temp2;
    char a;
    std::cout<<"Please select option 1 or option 2, type 1 for celcius and 2 for farenheit";
    std::cin>>a;
    switch(a)
    {
        case '1':
            std::cout<<"Enter temperature";
            std::cin>> temp1;
            temp2 = ((9.0 * temp1)/5.0) + 32;
            std::cout<<"The temperature in farenehit is "<< temp2;
            break;
        case '2':
            std::cout<<"Enter the temperature:";
            std::cin>>temp1;
            temp2 = (5 * (temp1-32)/9.0);
            std::cout<<"The temperatur in celcius "<< temp2;
            break;
        default:
            std::cout<<"Please enter either 1 or 2";
            break;
    }
    return 0;   
}