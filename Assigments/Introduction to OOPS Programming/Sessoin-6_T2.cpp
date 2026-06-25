#include<iostream>
#include<string>


using namespace std;

class InstaStory{
	protected : 
		int storyviews=506;
};

class SponseredStory : public InstaStory{
	
	public : 
		void display()
		{
			cout<<"The story view's are  : "<<storyviews<<" views";
		}
};
int main()
{
		SponseredStory obj;
		obj.display();
}

