#include<iostream>
#include<string>

using namespace std;
class playlist{
	
	public : 
		string name="karan";
		string created_on="04/11/206";
		bool is_public=true;
		int pointer=1;
		
	void tooglepublic(){
		
		++pointer;
		
		if(pointer%2!=0){
			is_public=true;
		}
		else{
			is_public=false;
		}
	}
		
		
				
};

int main()
{
	playlist obj;
	
	for(int i=0;i<=4;i++){
		cout<<boolalpha<<"Call["<<i+1<<"] == "<<obj.is_public<<endl;
		obj.tooglepublic();
	}
	
return 0;
}
