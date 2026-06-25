#include<iostream>
#include<string>

using namespace std;

class socialmediauser{
	
	private : 
		int follower;
		string username;
		
	public : 
		socialmediauser(){
			cout<<"Enter Username : ";
			cin>>ws;
			getline(cin,username);
		
			
			cout<<"Enter the follower count : ";
			cin>>follower;
			
		}	
		
		void displayProfile(){
			
			cout<<"Username ==  "<<username;
			
			cout<<"\n Follower count : "<<follower;
		}
};

int main()
{
	socialmediauser obj;
	obj.displayProfile();
}
