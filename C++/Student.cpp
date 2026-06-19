#include<iostream>
#include<string>

using namespace std;

class Students{
    private : 
        string name[100];
        int count=0,i;
        string search;

    public : 
        void addname(){
            cout<<"\nEnter the name you want to Add : ";
        	cin>>ws;
        	getline(cin,name[count]);
        	count++;
		
			cout<<"\nThe name was Added!!";
		}
		void display(){
			
			cout<<"\nThe name's are : ";
			
			if(count==0){
				cout<<"There are no name's right now !!\n";
			}
			for(i=0;i<count;i++){
				cout<<i+1<<" : "<<name[i]<<endl;
			}
		}
		
		void searchname(){
				
				int find=1;
				cout<<"\nEnter the name you want to search : ";
				cin>>ws;
				getline(cin,search);
				
				for(i=0;i<count;i++){
					if(name[i]==search){
						cout<<"\nThe name was found at position "<<i+1<<" : "<<name[i];
						find=0;
						break;
					}
				}
				
				if(find==1){
					cout<<"\nThe name was not found";
				}	
		}

		
};
int main()
{
    int choice;
	Students obj;
	
    do{

        cout<<"\t\t----------Student Managment system----------";
        cout<<"\nOperation's : \n1.Add name\n2.Display name's\n3.Search\n4.Exit\n";
        cout<<"Enter the operation's you want to perform : ";
        cin>>choice;
        
        switch(choice){
        	case 1 :
        		cout<<"\n\t\t----------Add Name----------\n";
				obj.addname();
        		break;
        	case 2 :
        		cout<<"\n\t\t----------Display Name----------\n";
        		obj.display();
				break;
			case 3 :
				cout<<"\n\t\t----------Search name----------\n";
				obj.searchname();
				break;
			case 4: 
				cout<<"\n\nExiting !!";
				break;
			default : 
				cout<<"\nInvilid input!!!";
				break;
		}
		
    }while(choice!=3);
    
    return 0;
}
