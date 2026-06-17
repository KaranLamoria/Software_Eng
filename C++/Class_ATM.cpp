/*
    balance check
    withdrawl
    deposit

*/


#include<iostream>
using namespace std;

class HDFC{
    private : 
        int balance=1000;
        int withd_bal;
        int depo_bal;

    public :
        void withdrawl()
        {
            cout<<"\n\t---------Withdrawl---------\n";
            cout<<"Enter the amount you want to withdrawl : ";
            cin>>withd_bal;

            if(balance < withd_bal){
                cout<<"\nThe withdrawl amount exceds the balance in your accout!!";
            }
            else{
                balance-=withd_bal;
                cout<<"\nThe withdrawl was succesfull !!";
                cout<<"The updated balance = "<<balance;
            }

            
        }
        void deposit()
        {
             cout<<"\n\t---------Deposit---------";
            cout<<"\nEnter the amount you want to deposit : ";
            cin>>depo_bal;

            balance+=depo_bal;
            cout<<"\nThe deposit was succesfull !!\n The updated balance : "<<balance;
        }

        void bal_check()
        {
            cout<<"\n\t---------Balance Check---------\n";
            cout<<"The balance in your account is : "<<balance;
        }
};

int main()
{
    int choice;
    HDFC obj;

    do{
        cout<<"\n\n---------what operation's you want to peform---------\n1.Balance Check\n2.Deposit\n3.Withdrawl\n4.exit\nEnter your choice : ";
        cin>>choice;
        if(choice==1){
            obj.bal_check();
        }
        else if(choice==2){
            obj.deposit();
        }
        else if(choice==3){
            obj.withdrawl();
        }
    }while(choice !=4);

    return 0;
}
