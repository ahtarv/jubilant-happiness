#include<iostream>

int main()
{
    std::string name[5];
    int size = sizeof(name)/sizeof(name[0]);
    std::string temp;

    for(int i = 0; i< size; i++){
        std::cout<<"Enter names or enter q to quite "<< i+1 <<": ";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        }
        else{
            name[i] = temp;
        }
    }

    std::cout<<"You entered the following names:\n";
    for(std::string name : name){
        std::cout<<name<<"\n";
    }
    return 0;
}