#include<iostream>
#include<string.h>

using namespace std;

string task[5];

int marktask(int index){
	
	int i;
	cout<<"\n\n--------Updated Task-list---------\n";
	
	task[index-1]+=" - Done";
	
	for(i=0;i<=4;i++){
		cout<<i+1<<" : "<<task[i]<<endl;
	}
}
int main()
{
	int i,index;
	
	cout<<"Enter the task : \n";
	
	
	for(i=0;i<=4;i++){
		cout<<i+1<<" : ";
		getline(cin,task[i]);
	}	
	cout<<"\nEnter the task no that you want to mark as done : ";
	cin>>index;
	
	marktask(index);
	
	return 0;
}
