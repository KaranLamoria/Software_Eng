#include<iostream>
using namespace std;

int main()
{
	int i,j,k;
	char a='a';
	cout<<"---------------Pattern - 3---------------\n";
	
	for(i=5;i>=1;i--){
		for(k=i+1;k>=1;k--){
			cout<<" ";
		}
		for(j=5;j>=i;j--){
			cout<<"*";
		}
			
		cout<<"\n";
	}
	
	return 0;
 } 
