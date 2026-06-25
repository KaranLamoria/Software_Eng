#include<iostream>
#include<string>

using namespace std;

class socialmediauser{
	
		
	public :
		
		int uploadvideo(string title,string c_name){		
			cout<<"\n\nVideo ["<<title<<"] uploaded to "<<c_name;
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

int main()
{
	youtuber obj;
	

}
