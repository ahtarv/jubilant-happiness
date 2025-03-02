#include<iostream>
int main()
{
    std::string student[] = {"Kushal", "Atharv", "Atharva", "Parth", "Jaypreet", "Advet"};
    int num;
    do{
    std::cout<<"Please enter a number, (1 - 6)";
    std::cin>> num;
    }while(num != 1 && num !=2 && num != 3 && num != 4 && num != 5 && num != 6);
    switch(num){
        case 1:
            std::cout<<"The student selected is "<<student[0]<<'\n';
            std::cout<<student[0]<<" studies at Thakur Shamnarayan in Information technology";
            break;
        case 2:
            std::cout<<"The student selected is "<<student[1]<<'\n';
            std::cout<<student[1]<<" studies at Dj sangvhi in Information Technology ";
            break;
        case 3:
            std::cout<<"The student selected is "<<student[2]<<'\n';
            std::cout<<student[2]<<" studies at SPIT in Computer engineering";
            break;
        case 4:
            std::cout<<"The student selected is "<<student[3]<<'\n';
            std::cout<<student[3]<<" studies at Thakur in Civil";
            break;
        case 5:
            std::cout<<"The student selected is "<<student[4]<<'\n';
            std::cout<<student[4]<<" studies in IIIT Jabalpur in architecture";
            break;
        case 6:
            std::cout<<"The student selected is "<<student[5]<<'\n';
            std::cout<<student[5]<<" studies at Vartak in IT ";
            break;
        default:
            std::cout<<"Invalid choice";
            break;
    }
    
    return 0;
}