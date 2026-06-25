#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	int daily_hour[100],choice,pointer=0,total=0;
	float avg;
	string reading;
	
	do{
		cout<<"\n\nSelect a choice from below : ";
		cout<<"\n1.Add daily log";
		cout<<"\n2.Generate weekly report";
		cout<<"\n3.Display";
		cout<<"\n4.Exit";
		
		cout<<"\nEnter your choice : ";
		cin>>choice;
		
		switch(choice){
			case 1: 
			{
				cout<<"Enter the time you studied today : ";
				cin>>daily_hour[pointer];
				
				ofstream write("Student_Productivity_Tracker.txt",ios::app);
				
					
					write<<"\nDay [ "<<pointer+1<<" ] == "<<daily_hour[pointer]<<endl;
					
					write.close();
					
					cout<<"\n\nData entered\n";
					pointer++;
				break;
			}
			
		case 2:
		{
    		cout<<"\n\n---------Weekly report----------";

    		if(pointer < 7)
    		{
       	 	cout<<"\nPlease enter at least 7 days of data first!";
       	 	break;
    		}

  		  	total = 0;

    	for(int i = pointer - 7; i < pointer; i++)
    	{
       	 total += daily_hour[i];
    	}

    	cout<<"\nThe total number of hours studied : "<<total;

    	avg = total / 7.0;

    	cout<<"\nThe average of last week is : "<<avg;

    	break;
		}
			
			case 3: 
			{
				cout<<"\n\n----------Display----------\n";
				
				ifstream read("Student_Productivity_Tracker.txt");
				
				while(getline(read,reading)){
					cout<<reading<<endl;
				}
				
				read.close();
				break;	
			}
			
			case 4: 
			{
				cout<<"\n\n-------Exiting------\n";
				break;
			}
			
			default : 
				cout<<"Enter an valid input!!";
				break;
		}
		
	}while(choice!=4);
}

