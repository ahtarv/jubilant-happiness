#include<iostream>
#include<ctime>
using namespace std;

void drawBoard(char *spaces){
    std::cout<<"     |     |     "<<'\n';
    std::cout<<"  " spaces[0]"   | << "spaces[1]"    |  "spaces[2]"   "<<'\n';
}
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer){
    return 0;
}
bool checkTie(char *spaces){
    return 0;
}


int main()
{
    char space[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);
    return 0;
}