#include<iostream>
#include<string>

using namespace std;
class playlist{
	
	public : 
		string name="karan";
		string created_on="04/11/206";
		bool is_public=true;
		
};

int main()
{
	playlist obj;	
	
	cout<<obj.name<<endl;
	
	cout<<obj.created_on<<endl;
	
	if(obj.is_public==1){
		cout<<"True";
	}
	else{
		cout<<"False";
	}

return 0;
}
