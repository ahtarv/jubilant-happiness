#include<iostream>
#include<ctime>

char getUserChoice(){
     char player;
     do{
     std::cout<<"Rock Paper Scissors Game!\n";
     std::cout<<"'R' for Rock\n";
     std::cout<<" 'P' for Paper\n";
     std::cout<<"'S' for Scissors\n";
     std::cin>>player;
     }while(player != 'R' && player != 'P' && player != 'S');
 
     
     return player;
}
char getCompChoice(){
    
    srand(time(NULL));
    int num = rand() % 3 + 1;
    switch(num){
        case 1:
            return 'R';
        case 2:
            return 'P';
        case 3:
            return 'S';
    }
    return 0;

}
void showChoice(char choice){
    
    switch(choice){
        case 'R':
            std::cout<<"rock\n";
            break;
        case 'S':
            std::cout<<"Scissors\n";
            break;
        case 'P':
            std::cout<<"Paper\n";
            break;
        default:
            std::cout<<"Invalid choice\n";
            break;
    }
}
void chooseWinner(char player, char computer){
    switch(player){
        case 'R': if(computer == 'R'){
                std::cout<<"It's a tie\n";
        }
        else if(computer == 'P'){
            std::cout<<"You lose!\n";
        }
        else{
            std::cout<<"You won";
        }
        break;
        case 'P':if(computer == 'P'){
            std::cout<<"Its a tie\n";
            else if(computer == 'R'){
                std::cout<<"You win!\n";
            }
            else{
                std::cout<<"You lose!\n";
            }
            break;
        }
        
        case 'S': if(computer == 'S'){
            std::cout<<"Its a tie\n";

        }
        else if(computer == 'R'){
            std::cout<<"You lose!";
        }
        else{
            std::cout<<"You win";
        }
        break;
    }
}
int main()
{
    char player, computer;
    player = getUserChoice();
    std::cout<<"Your choice is ";
    showChoice(player);
    computer = getCompChoice();
    std::cout<<"Computer's choice is:";
    showChoice(computer);

    chooseWinner(player,computer);

    return 0;
}
