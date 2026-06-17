#include<iostream>
using namespace std;


class A{
	private : 
		int num;
public: 	
	A(){
		cout<<"This is default constrctor !!";
	}
	A(int no){
		cout<<"\n\nThis is Parametrized constructor !!\n";
		num=no;
		cout<<"The updated value of num is : "<<num;
	}
};
int main(){
		A ob;
		A ob1(5);
		
}
