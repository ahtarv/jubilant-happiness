#include<iostream>
using namespace std;
int main()
{

    int *pointer;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        cout<<"address was not assigned";
    }
    else{
        cout<<"address was assigned";
    }
    return 0;
}