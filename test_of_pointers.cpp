#include<iostream>
using namespace std;
int main()
{
    std::string Names[5];
    int size = sizeof(Names)/sizeof(Names[0]);
    for(int i=0; i<size;i++){
        std::cout<<"Enter a name";
        std::getline(std::cin, Names[i]);
    }
    std::string *pNames = Names; 
    cout<<"all the names are located at "<<pNames;

    return 0;
}