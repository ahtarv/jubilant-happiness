#include<iostream>
int main()
{
    std::string students[] = {"Spongebob", "Patrick", "squidward"};
    char grades[] = {'O', 'A', 'A', 'B', 'B', 'F'};

   for(std::string student : students){
        std::cout<<student<<'\n';

    }   
    for(char grade : grades){
        std::cout<<grade<<'\n';
    }
    return 0;
}