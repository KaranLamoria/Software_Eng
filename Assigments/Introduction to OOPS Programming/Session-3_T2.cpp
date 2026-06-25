#include<iostream>
#include<string>

using namespace std;
class Flipkart{
	
	private : 
		float prod_price;
		int prod_rating;
		string prod_name;
		
	public : 
		
		Flipkart(string name,float price,int rating){
			prod_name = name;
			prod_price=price;
			prod_rating=rating;
		}
	
	void infodiplay(){
		cout<<"\n\n----------Display----------\n";
		cout<<"Product name : "<<prod_name;
		cout<<"\nProduct price : "<<prod_price<<endl<<"Rating  : ";
		for(int i=1;i<=prod_rating;i++){
			cout<<" * ";
		}
	}	
};
int main()
{
	int rating;
	string name;
	float price;
	
	cout<<"Enter the name of the Product : ";
	cin>>ws;
	getline(cin,name);
	
	cout<<"Enter the price of the product : ";
	cin>>price;
	
	cout<<"Enter the rating of the product : ";
	cin>>rating;
	
	
	Flipkart obj(name,price,rating);
	obj.infodiplay();
	
	return 0;
}
