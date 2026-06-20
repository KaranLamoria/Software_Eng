#include<stdio.h>

int main()
{
	int min[7],i;
	
	printf("Enter the no of miniutes that you have listen in a day per week : \n");
	for(i=0;i<=7;i++)
	{
		printf("Day - %d == ",i);
		scanf("%d",&min[i]);
	}
	return 0;
}

