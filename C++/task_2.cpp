#include<iostream>
using namespace std;

int main()
{
	int year;
	
	cout<<"Enter a year : ";
	cin>>year;
	
	
	if((year%4==0)&&(year%100!=0)||(year%400==0)){
		cout<<"\nThe "<<year<<" year is an leep year ";
	}
	else{
		cout<<"\nThe "<<year<<" year is not a leep year";
	}
	return 0;
}
