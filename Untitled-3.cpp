#include<iostream>
using namespace std;

int main()
{
    int loginattempt = 0;
    std::string Username;
    std::string Password ;
    std::cout<<"Please enter your user name:";
    std::getline(std::cin, Username);
    std::cout<<"Please enter your password:(Please remember these for latter)";
    std::getline(std::cin, Password);
    for(loginattempt = 0; loginattempt == 5; loginatttempt++){
        std::string user;
        std::cout<<"Please enter your user name which you decided upon":
        std::getline(std::cin, user);
        if(user == Username){
            std::string pass
            std::cout<<"Please continue and enter your password";
            std::getline(std::string pass);
            if(pass == Password){
                std::cout<<"You have entered your details correctly";

            }
            else{
                std::cout<<"Please try again, your password was incorrect";
            }
        }
        else{
            std::cout<<"The username you entered is incorrect, please try again";
        }

    }
    return 0;
    

}