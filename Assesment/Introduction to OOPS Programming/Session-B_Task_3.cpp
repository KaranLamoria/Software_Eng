#include<iostream>

using namespace std;
int swap(int *a,int *b){
	
	int temp;
	
	temp=*b;
	*b=*a;
	*a=temp;
	
	cout<<"\n\nAfter swaping ";
	
	cout<<"\nA : "<<*a;
	cout<<"\nB : "<<*b;
}


int main(){
	int a=10,b=20;
	
	cout<<"\nBefore swaping";
	cout<<"\nA : "<<a;
	cout<<"\nB : "<<b;
	
	swap(&a,&b);	
}
