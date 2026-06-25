#include<iostream>
#include<string>

using namespace std;
int main(){
	
	int input;
	
	cout<<"Enter the time you studied today : ";
	cin>>input;
	
	if(input>=1&&input<=3){
		
		cout<<"\nYou need to study more this is not even close to enough!!";
	}
	else if(input>3&&input<=6){
		cout<<"\nYou can take some rest and then study again,but keep in mind you need to study more";
	}
	else if(input>=7&&input<=11){
		cout<<"\nKeep up you are doing great";	
	}
	else if(input>=12&&input<=15)
	{
		cout<<"\n Well done you have a great focus you can take some rest now";
	}
	else if(input>=15&&input<=24){
	
		cout<<"\nAtleast speek true no one can study this much ! \n But if you did You are Great ";
	}
	else{
		cout<<"\nInvilid input";
	}
}
