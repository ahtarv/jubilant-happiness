#include<iostream>
#include<ctime>
using namespace std
int main()
{
    int num, guess, tries;
    srand(time(NULL));
    num = (rand() % 100) + 1;
    std::cout<<"*******number game*******\n";
    do{
        std::cout<<"Enter a guess between 1 and 100\n";
        std::cin>>guess;
        tries++;
        if(guess>num){
            std::cout<<"Too high\n";
        }
        else if(num>guess){
            std::cout<<"too low\n";
        }
        else{
            std::cout<<"CORRECT # of tries"<<tries<<'\n';
        }


    }while(guess != num);
    std::cout<<"*****************************";
    return 0;
}