#include<iostream>
#include<string>
using namespace std;

class Student{
	
	private: 
		char name[100];
		int count=0;
	public : 
		int addstudent(){
			
			cout<<"Enter the student name you want to add : ";
			cin.ignore();
			getline(cin,name[count]);
			count++;	
			
			cout<<"\nName was addeed!!\n";
		return 0;
		}
		void display(){
			int i;
			for(i=0;i<count;i++){
				cout<<name<<endl;
			}
		}

};

int main(){

	Student s1;
	
	s1.addstudent();
	s1.display();
}
