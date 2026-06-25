#include<iostream>
#include<string.h>


using namespace std;
class Task{

	private : 
		string task[100];

		bool isdone=true;
		
	public :
		int addtask(){
			cout<<"Enter the Title's : ";
			for(int i=0;i<3;i++){
				cout<<"\nTask - ["<<i+1<<"] == ";
				getline(cin,task[i]);
			}
			
			cout<<"\n Task added!!\n";
		} 
		
		void markTaskDone(int index){
			
			task[index-1]+=" - Done ";
			cout<<"Task marked as done";
		}
		void showtask()
		{
			cout<<"\n\n\t\t-----------Display-----------\n";
			for(int i=0;i<3;i++){
				cout<<"Task ["<<i+1<<"]"<<task[i]<<endl;
			}
		}
	
};


int main()
{
	Task obj;
	int done;
	
	obj.addtask();
	cout<<"\nTitle's before marking done ";
	obj.showtask();
	cout<<"\n\nEnter the task no you want to mark as done : ";
	
	cin>>done;
	obj.markTaskDone(done);
	
	obj.showtask();


	return 0;	
}
