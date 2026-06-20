#include<iostream>
#include<string.h>


using namespace std;

string tasklist[5];

int taskdone(int index){
	tasklist[index]=done;
}

int main()
{
	
	cout<<"Enter the task's :\n";
	
	for(int i=0;i<=4;i++){
		cout<<i+1<<" : ";
		getline(cin,tasklist[i]);
	}
	
	return 0;
}
