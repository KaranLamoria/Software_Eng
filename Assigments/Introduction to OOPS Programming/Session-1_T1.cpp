#include<iostream>
#include<string.h>

using namespace std;

string task[5];
int main()
{
	int i;
	
	for(i=0;i<=4;i++){
		cout<<i<<" : ";
		getline(cin,task[i]);
	}	
	
	return 0;
}
