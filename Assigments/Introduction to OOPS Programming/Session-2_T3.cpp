#include<iostream>
#include<string.h>
using namespace std;

class FoodOrder{
	
	private : 
			int order_id;
			string res_name;
			bool isdelivered;
	
	public : 
			
		void input()
		{
			cout<<"Enter the order id : ";
			cin>>order_id;
		
		
		
			cout<<"Enter the resturant name : ";
				
			cin>>ws;
			getline(cin,res_name);
		}
	
		void marked_delivered(string done){
			
			if(done=="Yes"||done=="yes"){
				
				isdelivered=true;
			}
		
			else{
				isdelivered=false;
			}
		}
	
		void display()
		{
			cout<<"\n\n-----------Order detail's-----------\n\n";
		
			cout<<"Order id  : "<<order_id<<endl;
			cout<<"Resturant name : "<<res_name<<endl;
			
			if(isdelivered==true){
			
				cout<<"Delivery statue : Done";
			}
			else{
				cout<<"Delivery statue : Not Done";
			}
		}
			
};

int main()
{
	
	string done;
	FoodOrder obj; 
	obj.input();
	
	cout<<"\nEnter 'yes if order is delivered And 'no' if the order is not delivered \n";
	cin>>ws;
	getline(cin,done);
	
	obj.marked_delivered(done);
	
	obj.display();
	
	return 0;
}
