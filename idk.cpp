#include<iostream>
double square(double length){
    return length * length;
}
double cube(double length){
    return length * length * length;
}
int main()
{
    double length;
    double area = square(length);
    double volume = cube(length);
    std::cout<<"Enter the value of length: ";
    std::cin>>length;    std::cout<<"Area: "<<area<<'\n'; 
    std::cout<<"Volume :"<<volume<<" cm^3";
    return 0;
}
