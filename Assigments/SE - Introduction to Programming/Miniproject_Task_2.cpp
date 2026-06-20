#include<stdio.h>

int main()
{
	int min[100]={65,33,90,55,72,80,33};
	int i,choice,summary=0,pointer=8;
	
	
	
	do {
		printf("\nEnter the function you want to perform : \n");
		printf("1.new listning minutes \n2.Weekly summary\n3.EXIT\nEnter your choice : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1 :
				
				printf("\n--------New Listning Min's--------\n");
				printf("Enter the new log min of the day : ");
				scanf("%d",&min[pointer]);
				printf("\nThe log was added\n");
				
				pointer++;
				break;
			case 2:  
				printf("\n\t\t--------weekly summary--------\n");
				for(i=0;i<=7;i++){
					summary+=min[i];
				}
					printf("Total min music listend last week was : %d min's\n",summary);
				break;
			case 3: 
				printf("\nExiting\n");
				break;
				
			default : 
				printf("\n\nInvilid input!!");
				break;
		}
	}while(choice!=3);
	return 0;
}

