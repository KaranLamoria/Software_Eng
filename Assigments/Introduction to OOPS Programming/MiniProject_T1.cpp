#include<iostream>
#include<string>

using namespace std;

class Content{
	
	private: 
		string title = "First Reel";
		string platform = "Instagram";
		int views = 500;
		string status="Uploaded";
		
	public : 
		void display()
		{
			cout<<"Title : "<<title<<"\nPlatform : "<<platform<<"\nviews : "<<views<<"\nstatus : "<<status;
		}
		
};
int main()
{
	Content obj;
	
	obj.display();
	
	return 0;
}
