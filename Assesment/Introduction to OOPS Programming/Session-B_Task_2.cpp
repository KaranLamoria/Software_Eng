#include<iostream>

using namespace std;

int main(){
	
	int s_time[7],total=0;
	float avg=0.0;
	
	
	cout<<"Enter the screen time for 7 day's : \n";
	
	for(int i=0;i<7;i++){
		
		cout<<"Day ["<<i+1<<"] == ";
		cin>>s_time[i];
		
		total+=s_time[i];
	}
	
	cout<<"\n\nThe total amount of screen time in last week is : "<<total<<"hours";	
	
	avg=(total/7.0);
	
	cout<<"\nThe average of the last week is : "<<avg<<"hours";
	
	if(avg>=4.0){
		cout<<"\n\nWarning !! you need to reduce your screen time";
	}
	
	
	
}
