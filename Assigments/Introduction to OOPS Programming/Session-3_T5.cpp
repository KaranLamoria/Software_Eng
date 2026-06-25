#include<iostream>
#include<string.h>
#include<fstream>
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
	
	~Playlist(){
		ofstream fp;
			fp.open("playlist.txt");
			
			fp<<playlist_name;
			
			fp.close();
			cout<<"Playlist name Saved !! ";
		
	}
};
int main()
{
	Playlist obj;
	
	return 0;
}
