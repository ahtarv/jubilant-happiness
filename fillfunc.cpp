#include<iostream>

int main()
{
    //fill() = fills a range of elements with a specifedd value 
    const int size = 99;
    std::string food[size];

    fill(food, food + size/2, "pizza");
    fill(food + size/3, food + (2 * size/3), "Chciken");
    fill(food+ (2 * size/3), food + size, "Mutton");

    for(std::string food:food){
        std::cout<<food<<" ";
    }

    return 0;
}