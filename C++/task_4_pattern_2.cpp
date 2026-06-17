#include<iostream>
using namespace std;

int main()
{
	int i,j;
	char a='a';
	cout<<"---------------Pattern - 2---------------\n";
	
	for(i=4;i>=1;i--){
		for(j=i;j<=4;j++){
			cout<<a++;
		}		
		cout<<"\n";
	}
	
	return 0;
 } 
