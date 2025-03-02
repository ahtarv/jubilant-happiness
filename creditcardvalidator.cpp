#include<iostream>
using namespace std;

int getDigit(const int number){

    return number % 10 + (number/10 %10);
}
int sumOddDigits(const std::string cardNumber){
    int sum = 0;

    for(int i= cardNumber.size() - 1; i >= 0; i-=2){
        sum += getDigit(cardNumber[i] - '0')  ;
    }
    return sum;
}
int sumEvenDigits(const std::string cardNumber){
    int sum = 0;

    for(int i= cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}

int main()
{
        std::string cardNumber;
        int result = 0;

        cout<<"Enter a credit card number:";
        getline(std::cin, cardNumber);

        result = sumEvenDigits(cardNumber)+ sumOddDigits(cardNumber);
        if(result %10 == 0){
            cout<<"The card no. is valid";
        }
        else{
            cout<<"THe card no. is not valid";
        }

    return 0;
}