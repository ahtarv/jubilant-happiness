#include<iostream>
int main(){

    std::string cars[][3] = {{"Mustang", "Escaper","F=150"}, 
                            {"Corveeete","Equinox","Silverado"},
                            {"Challenger","Hellcat","Durango"}};
    int rows = sizeof(cars)/sizeof(cars[0]);
    int colums = sizeof(cars)/sizeof(cars[0]);


    for(int i = 0; i < rows; i++){
        for(int j = 0; j <colums;j++){
            std::cout<<cars[i][j]<<" ";
        }
        std::cout<<'\n';
    }

    return 0;
}