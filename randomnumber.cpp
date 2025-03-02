#include<iostream>
#include<ctime>
int main()
{
    // pseudo random
    int i;
    for(i=1, i == 7; i++;){
        srand(time(NULL));
        int num = rand();
        std::cout<< num;
        
    }
return 0;
}