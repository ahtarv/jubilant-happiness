//banking program
#include<iostream>
#include<iomanip>
void showbalance(double balance){
    std::cout<<"Your Balance is: $ "<<std::setprecision(5)<<std::fixed<<balance<<"\n";

}
double deposit(){
    double amount = 0;
    std::cout<<"Enter amount to be deposited:";
    std::cin>>amount;
    if(amount>0){
        return amount;
    }
    else{
        std::cout<<"That's not a valid amount\n";
        return 0;
    }
    
    
    
}
double withdraw(double balance){
    double amount = 0;
    std::cout<<"Enter amount to be withdrawn:";
    std::cin>>amount;
    if(balance>0){
        return amount;
    }
    else{
        std::cout<<"negative balance is not allowed by law\n";
        return 0;
    }
}
int main()
{
    double balance = 0;
    int choice = 0;
    do{
    std::cout<<"Enter your choice:\n";
    std::cout<<"1.Show Balance\n";
    std::cout<<"2. Deposit\n";
    std::cout<<"3. Withdraw\n";
    std::cout<<"4.Exit\n";
    std::cin>> choice;

    std::cin.clear();
    fflush(stdin);

    switch(choice){
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance += deposit();
            showbalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showbalance(balance);
            break;
        case 4:
            std::cout<<"Thank you for visiting";
            break;
        default:
            std::cout<<"Invalid choice";
            break;
         }

    }while(choice != 4);

   
    return 0;
}