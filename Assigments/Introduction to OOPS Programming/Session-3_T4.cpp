#include<iostream>

using namespace std;
class Bookmyshow{
	
	private : 
		string seat_no;
		string movie_name;
	
	public : 
	Bookmyshow(string no,string name){
		
		seat_no=no;
		name=movie_name;
		
		
		cout<<"Creating a TICKET !!";
	}
	
	~Bookmyshow(){
		cout<<"\n\nSaving your TICKET !!";
	}
};
int main()
{
	Bookmyshow  obj("D5","Salaar");
	

	
	
}
