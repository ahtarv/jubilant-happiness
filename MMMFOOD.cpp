#include<iostream>
int main()
{
    char hungry;
    std::string food;
    std::cout<<"Are you hungry or not (answer in Y or N):";
    std::cin>>hungry;
    switch(hungry)
    {
        case 'Y':
            std::cout<<"What you do want to eat baby boy?";
            std::cin>>food;
            std::cout<<"Ok good boy give me half an hour to make a delicious "<< food;
            break;
        case 'N':
            std::cout<<"GEt out of here!!!!";
            break;
        default:
            std::cout<<"Don't be fucking pedanctic about this shit";
            break;
    }
    return 0;
}