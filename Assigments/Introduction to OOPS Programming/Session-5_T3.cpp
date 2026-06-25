#include<iostream>
#include<string>


using namespace std;
int searchProduct(string prod_name,string catageory){
	
	cout<<"\nSearching result's for Product name  : "<<prod_name<<"\n Categoery  : "<<catageory<<endl;
}
int searchProduct(string prod_name){
	
	cout<<"\nSearching result's for Product name  : "<<prod_name;
}

int main()
{
	searchProduct("iphone 13","mobile");
	searchProduct("iphone 13");
}
