#include<iostream>
int main()
{
    double temp, tempf;
    std::cout<<"Type the temperature in celcius:";
    std::cin>> temp;
    tempf = ((9 * temp)/(5.0)) + 32 ;
    std::cout<<"THe temperature in farenheit is "<<tempf;
    return 0;

}