#include<iostream>
#include<ctime>
int main()
//rock paper scissors bitch
{
    int choice1;
    int choice2;
    srand(time(NULL));
    choice1 = rand() % 3;
    //btw 1 is for rock. 2 is for paper and 3 is for scissors
    std::cout<<"Enter \n 1 for rock,\n 2 for paper,\n 3 for scissors.";
    std::cin>>choice2;
    if(choice1 == 1 && choice2 == 1 || choice1 == 2 && choice2== 2 || choice1 == 3 && choice2 == 3){
        std::cout<<"Both the choices cancel each other out.";
    }
    if(choice1 == 1 && choice2 == 2){
        std::cout<<"Paper wins over rock. Player wins.";
    }
    if(choice1 == 1 && choice2 == 3){
        std::cout<<"Rock wins over paper. Comp wins.";
    }
    if(choice1 == 2 && choice2 == 1){
        std::cout<<"Paper beats rock. Comp wins";
    }
    if(choice1 == 2 && choice2 == 3){
        std::cout<<"Scissors beats paper. Player wins.";
    }
    if(choice1 == 3 && choice2 == 1){
        std::cout<<"Rock beats scissors. Player wins";
    }
    if(choice1 == 3 && choice2 == 2){
        std::cout<<"Sccissors beats papers. Comp wins";
    }
    if(choice2 != 1 || choice2 != 2 || choice2 != 3 ){
        std::cout<<"Invalid choice nigger";
    }

    return 0;
}