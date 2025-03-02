#include<iostream>

void happyBirthday(std::string name, int age){
    std::cout<<"Happy Birthday to "<< name <<'\n';
    std::cout<<"You are "<< age <<" years old\n";
}


int main()
{
    //function is a block of a reusable code
    std::string name = "atharv";
    int age = 18;

    happyBirthday(name, age);
    happyBirthday(name, age);
    happyBirthday(name, age);
    return 0;
}