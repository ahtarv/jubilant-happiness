#include<iostream>
#include<ctime>
int main()
{
    //waifu randomiser
    srand(time(NULL));
    int num = rand() % 8;
    switch(num){
        case 1:
            std::cout<<"So your waifu of choice is Speedwagon;\n";
            break;
        case 2:
            std::cout<<"so your waifu of choice is Mirko from My hero";
            break;
        case 3:
            std::cout<<"So your waifu of choice is Yor from Spy X Family";
            break;
        case 4:
            std::cout<<"So your waifu of choice is Tsunade from Naruto";
            break;
        case 5:
            std::cout<<"So your waifu of choice is Robin from One piece(noice choice sid)";
            break;
        case 6:
            std::cout<<"So your waifu of choice is Astolofo(Femboys cock are cute af i have heard *wink*, if you want to suck them...)";
            break;
        case 7:
            std::cout<<"so your waifu of choice is black cat lady from bleach";
            break;
        case 8:
            std::cout<<"stop thirsting over imaginary woman sid.";
            break;
        default:
            std::cout<<"Not possible";
            break;
    
    }
    return 0;
}