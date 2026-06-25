#include<iostream>
#include<string>

using namespace std;
class playlist{
	
	public : 
		string name;
		string created_on;
		string songs[100];
		int point;
		
	playlist(){
		
		cout<<"Enter the name of the playlist : ";
		cin>>ws;
		getline(cin,name);
		
		cout<<"Enter the date it was created on : ";
		getline(cin,created_on);
		
		point=0;
	}	
	
	void addsong(){
		
		cout<<"\n\n----------ADDSONGS----------\n";
		cout<<"Eneter the song you want to add to the list : ";
		cin>>ws;
		getline(cin,songs[point]);
		point++;
	}
	
	void display(){
		cout<<"\n\n----------Display----------\n";
		
		for(int i=0;i<point;i++){
			cout<<"Song - ["<<i+1<<"] == "<<songs[i]<<endl;
		}
	}
};

int main()
{
	int choice;
	playlist obj;	
	
	cout<<obj.name<<endl;
	
	cout<<obj.created_on<<endl;
	
	
	
	do{
		cout<<"\n\n-----------Function's-----------\n1.Add Songs\n2.Display\n3.exit\nEnter your choice : ";
		cin>>choice;
		
		switch(choice){
			case 1 : 
				obj.addsong();
				break;
			case 2 : 
				obj.display();
				break;
			case 3 : 
				cout<<"\n----Exiting----";
				break;
			default : 
				cout<<"Invilid input";
				break;
		
		}	
	}while(choice!=3);
	
	

return 0;
}
