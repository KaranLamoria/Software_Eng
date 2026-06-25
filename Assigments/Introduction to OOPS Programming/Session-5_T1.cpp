#include<iostream>
#include<string>

using namespace std;
class  PaymentProcessor{
	
	public : 
		int processPayment(float amount){
			
			cout<<"\n\n\------------Single Parameter----------\n";
			cout<<"Toatal amount : "<<amount;
		}
		
		int processPayment(float amount,float coupon){
			cout<<"\n\n-----------Double Parameter-----------\n";
			
			amount=amount*(coupon/100);
			
			cout<<"Total amount == "<<amount;
		}
	
};
int main()
{
PaymentProcessor obj;

obj.processPayment(500.0);
obj.processPayment(500.0,30.0);
	
}
