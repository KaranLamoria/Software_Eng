#include<iostream>
#include<string>

using namespace std;

class socialmediauser{
	
		
	public :
		
	
		
		int uploadvideo(string title,string c_name){		
			cout<<"\n\nVideo ["<<title<<"] uploaded to "<<c_name;
		}
		
		int publisEpisode(string ep_title,string pd_name){
			cout<<"Episode "<<ep_title<<" published on "<<pd_name;
		}
		
		
};


class youtuber : public socialmediauser{
		
		string title,channelname;
		public : 
		youtuber(){
			
			cout<<"Enter the name of the channel : ";
			cin>>ws;
			getline(cin,channelname);
			cout<<"Enter the title of the video : ";
			cin>>ws;
			getline(cin,title);
			
			
			uploadvideo(title,channelname);
		}
};



class Podcaster : public socialmediauser{
	
	private : 
		string episodename,podcastname;
	public : 
	
	Podcaster(){
		cout<<"Enter the name of the podcast : ";
			cin>>ws;
			getline(cin,podcastname);
			cout<<"Enter the title of the episode : ";
			cin>>ws;
			getline(cin,episodename);
			
			publisEpisode(episodename,podcastname);
	}
};
int main()
{
	Podcaster obj;
}
