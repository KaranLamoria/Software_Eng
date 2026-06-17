//Factorial function

#include<iostream>
using namespace std;

int fact(int no){
	if(no==1||no==0){
		return 1;
	}
	return no*fact(no-1);
}
int main(){
	
	int no;
	
	cout<<"Enter a number : ";
	cin>>no;

	cout<<"factorial of "<<no<<" == "<<fact(no);
	
	return 0;	

}
