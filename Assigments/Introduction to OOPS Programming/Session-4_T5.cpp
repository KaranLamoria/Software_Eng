#include<iostream>
#include<string>

using namespace std;

class socialmediauser{
	private : 
		string username;
	public :
		
		socialmediauser(){
			cout<<"Enter the user name : ";
			cin>>ws;	
			getline(cin,username);
		}
		
		
		int uploadvideo(string video_title,string c_name){		
			cout<<"\n\nVideo ["<<video_title<<"] uploaded to "<<c_name;
		}
		
		int publisEpisode(string ep_title,string pd_name){
			cout<<"Episode "<<ep_title<<" published on "<<pd_name;
		}	
		
		int poststory(string insta_title){
			
			cout<<"["<<username<<"] posted a new story: ["<<insta_title<<"]";
		}
};

class InstagramInfluencer : public socialmediauser{

	
	public: 
	
		string insta_title; 
	
		InstagramInfluencer(){
			cout<<"Enter the story title : ";
			cin>>ws;
			getline(cin,insta_title);
			
			poststory(insta_title);
		}
};



class youtuber : public socialmediauser{
		
		string title,channelname;
		public : 
		youtuber(){
			
			cout<<"Enter the name of the channel : ";
			cin>>ws;
			getline(cin,channelname);
//			cout<<"Enter the title of the video : ";
//			cin>>ws;
//			getline(cin,title);
//			
//			uploadvideo(title,channelname);
		}

		int streamGame(string gamename,string username){
			
			cout<<"["<<username<<"] is now streaming ["<<gamename<<"] on ["<<channelname<<"]";
		}

};

class GamingYouTuber : public youtuber{
	
	public : 

		string gamename,username;
		GamingYouTuber(){
			
			cout<<"Enter the Game name : ";
			cin>>ws;
			getline(cin,gamename);
			
			cout<<"Enter the Game Username : ";
			cin>>ws;
			getline(cin,username);
			
			streamGame(gamename,username);			
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
	InstagramInfluencer obj;
}
