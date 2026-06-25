#include<iostream>
#include<string.h>
using namespace std;

class FoodOrder{
	
	private : 
			int order_id;
			string res_name;
			bool isdelivered;
	
	public : 
			
		FoodOrder(int id,string name){
			order_id=id;
			res_name=name;
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
	int id;
	string name;
	
	
	cout<<"Enter the id of the order  : ";
	cin>>id;
	cout<<"Enter the Resturant name  : ";
	cin>>ws;
	getline(cin,name);
	
	FoodOrder obj(id,name); 
	
	cout<<"\nEnter 'yes if order is delivered And 'no' if the order is not delivered \n";
	cin>>ws;
	getline(cin,done);
	
	obj.marked_delivered(done);
	
	obj.display();
	
	return 0;
}
