
#include<stdio.h>


void passbyvalue(int follower){
	follower+=500;
	printf("\nPass by Value inside a function : %d",follower);
}
void passbyrefrence(int *follower){
	*follower+=1000;
	printf("\nPass by refrence inside a function : %d",*follower);
}


int main(){		
	int follower=5000;
	
	printf("Initial value of follower : %d\n",follower);
	
	passbyvalue(follower);
		printf("\n\n-----------inside main after pass by value-----------");
		printf("\nThe value of follower's inside main After pass by value : %d\n",follower);
				
	passbyrefrence(&follower);
		printf("\n\n-----------inside main after pass by refrence-----------");
		printf("\nThe value of follower's inside main After pass by refrence : %d",follower);
	return 0;
}
