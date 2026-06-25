#include<iostream>
#include<string>
#include<fstream>


using namespace std;
int main()
{
	string d_goals[100];
	string reading;
	int choice,pointer=0;
	do{
		cout<<"Function ";
		cout<<"\n1.Add daily task";
		cout<<"\n2.Display task";
		cout<<"\n3.Exit\n";
		
		cout<<"Enter your choice : ";
		cin>>choice;
		
		switch(choice){
			case 1: 
			{
			
				cout<<"\n\nEnter task : ";
				cin>>ws;
				getline(cin,d_goals[pointer]);
				
				
				ofstream wr("Dailytask.txt",ios::app);
				
				wr<<"\nTask [ "<<pointer<<" ] == "<<d_goals[pointer];
				
				pointer++;
				
				wr.close();
				cout<<"\nTask Entered";
				
				break;
			}
			case 2: 
			{
				cout<<"\n\n---------Display---------\n";
				
				ifstream read("Dailytask.txt");
				
				if(!(read)){
					cout<<"\nThe file is empty enter data first!!";
				}
				
				cout<<"\n\n";
				
				while(getline(read,reading)){
					cout<<reading<<endl;
				}
				
				read.close();
		
				break;
			}
			case 3 : 
			{
			
				cout<<"\n\n---------Exiting---------\n";
				break;
			}
			default : 
			{
				cout<<"Enter an valid input !!";
			}
		}
		
	}while(choice!=3);
}


