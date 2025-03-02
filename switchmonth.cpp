#include<iostream>
int main()
{
    int month;
    std::cout<<"Enter your month(1-12):";
    std::cin>> month;
    switch(month)
    {
        case 1:
            std::cout<<"It is januray";
            break;
        case 2:
            std::cout<< "It is feb";
            break;
        case 3:
            std::cout<<"It is march";
            break;
        case 4:
            std::cout<<"It is April";
            break;
        case 5:
            std::cout<<"It is May";
            break;
        case 6:
            std::cout<<"It is June";
            break;
        case 7:
            std::cout<<"It is july";
            break;
        case 8:
            std::cout<<"It is august";
            break;
        case 9:
            std::cout<<"It is Septemebr";
            break;
        case 10:
            std::cout<<"It is october";
            break;
        case 11: 
            std::cout<<"It is november";
            break;
        case 12:
            std::cout<<"it is december";
            break;
        default:
            std::cout<<"Please enter digits from 1 - 12 and nothing else";
            break;
    }
    return 0;
}