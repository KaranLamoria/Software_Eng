#include<iostream>
#include<string>

using namespace std;
class Movie{
	
	public : 
		string movie_name;
	 
		Movie(string name){
			movie_name=name;
		}
		
		Movie(Movie &obj){
			movie_name=obj.movie_name;
		}
};
int main()
{
	string name ;
	cout<<"Enter the name of the movie : ";
	cin>>ws;
	getline(cin,name);
	
	
	
	Movie objA(name);
	cout<<"\n\n-------Default Constructor----\nMovie name : "<<objA.movie_name;
	

	Movie objB(objA);
	cout<<"\n\n-------Copy Constructor----\nMovie name : "<<objB.movie_name;
	

}
