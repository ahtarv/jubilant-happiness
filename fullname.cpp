#include<iostream>
int main()
{
	std::string name;
	std::cout<< "What's your full name?";
	std::getline(std::cin, name);
	std::cout<< "Your full name is "<< name ;
	return 0;

}