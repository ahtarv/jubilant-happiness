#include<iostream>
using namespace std;
int main(){
    
    int num;
    int *pNum = NULL;
    pNum = new int;
    cout<<"Please enter a value of num:";
    cin>>num;
    *pNum = num;
    cout<<"The address of the num is "<<pNum<<'\n';
    cout<<"The value of the num is "<<*pNum;
    delete pNum;
    return 0;

}