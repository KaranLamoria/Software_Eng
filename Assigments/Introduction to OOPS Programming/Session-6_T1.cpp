#include<iostream>
#include<string>

using namespace std;

class Songs{
	
	private : 
		string title,artist;
		
	public : 
		int getter(string t,string name){
				
				title=t;
				artist=name;
		} 
		
		int setter(){
			cout<<"The name of the artist : "<<artist;
			cout<<"\nThe title is  : "<<title;
		}
};
int main(){
	
	Songs obj;
	obj.getter("First Song","Karan Lamoria");
	
	obj.setter();
	
	
	
	return 0;
}
