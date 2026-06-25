#include<iostream>
#include<string.h>

using namespace std;
class Playlist{
	
	private  :
		string playlist_name;

public : 		
	Playlist()
	{
		playlist_name="My Favourite";
		cout<<"\nWelcome";
	}
};
int main()
{
	Playlist obj;
	
	return 0;
}
