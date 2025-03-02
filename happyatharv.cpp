#include<iostream>
void happyBirthday();
int main()
{
    std::string name = "Atharv";
    happyBirthday();
    happyBirthday();
    happyBirthday();
    return 0;
}
void happyBirthday(std::string name = "Atharv"){
    std::cout<<"Happy Birthday to "<<name<<'\n';
    std::cout<<"Happy Birthday to "<<name<<'\n';
    std::cout<<"Happy Birthday to "<<name<<'\n';
    std::cout<<"Happy Birthday to "<<name<<'\n';
}