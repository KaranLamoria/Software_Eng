#include<iostream>
#include<string>

using namespace std;
class Task{
	
	private  : 
		string task[5]={"Go to work","Complete the work given","eat lunch","play some games","sleep"};
		bool isdone;
			
		
	public :
		Task(){
			
			isdone="ture";
		}
		void display(){
			
			int i;
			cout<<"\n\n\t\t----------Task----------\n";
			
			for(i=0;i<=4;i++){
				cout<<"Task ["<<i+1<<"] == "<<task[i]<<endl;
			}
			cout<<"\n";
		}
		
		int markdone(){
			int i;
			
			cout<<"\n\nEnter the task that are completed : ";
			for(i=0;i<=4;i++){
				cout<<"Task ["<<i+1<<"] == ";
				cin>>boolalpha>>isdone;
				
				if(isdone==true){
					task[i]+=" - Done ";
				}
				else{
					task[i]+=" - Not done";
				}
			}						
		}
	
};


int main()
{
	Task t;
	t.display();
	t.markdone();
	t.display();

	return 0;	
}
