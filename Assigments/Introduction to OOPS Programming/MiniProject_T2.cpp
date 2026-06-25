#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Content{
	
	private: 
		string title;
		string platform;
		int views;
		string status;
		int pointer=1;
		
	public : 
		
		
		void save(){
			
			ofstream write("content_list.txt",ios::app);
			
			write<<"\n----------Saved Data----------\n";
			write<<"Data Entry : "<<pointer<<"\nTitle : "<<title<<endl<<"platform : "<<platform<<endl<<"View's : "<<views;
			
			write.close();
			pointer++;
			
			cout<<"\nData entery successfull";
			
		}
		
		int addData(){
			
			cout<<"\n\n----------Add Data----------\n";
			
			cout<<"Enter the title : ";
			cin>>ws;
			getline(cin,title);
			
			cout<<"Enter the platform of publishing : ";
			cin>>ws;
			getline(cin,platform);
			
			cout<<"Enter the number of view's: ";
			cin>>views;
			
			save();
			
			
		}
		
	
		
};
int main()
{
	Content obj;
	
	int choice; 
	
	do {
		cout<<"\n\n---------Function's---------\n1.Add content\n2.Exit!!\n";
		cout<<"Enter your  choice : ";
		cin>>choice;
		
		switch(choice){
			case 1 : 
				obj.addData();
				break;
		
			case 2:
				cout<<"\nExititng!!!";
				break;  	
			default : 
				cout<<"Invilid input!";
				break;
		}
	}while(choice!=2);
	
	return 0;
}
