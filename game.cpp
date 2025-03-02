#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
char getComputermove()
{
    int move;
    srand(time(NULL));
    move = rand() % 3;
    if(move == 0){
        return 'p';
    }
    else if (move == 1){
        return 's';
    }
    return 'r';
}
int getResults(char playerMove, char computerMove)
if(playerMove == computerMove){
    return 0;
}
if(playerMove=='s' && computerMove == 'p'){
    return 1;
}
if (platerMove == 's' && computerMove == 'r'){
    return -1;
}
if(playerMove == 'p' && computerMove ='r' ){
    return 1;
}
if(playerMove == 'p' && computerMove == 's'){
    return -1;
}
if(playerMove == 'r' && computerMove == 'p'){
    return -1;
}
if(playerMove == 'r' && computerMove == 's'){
    return 1;
}
return 0;
}