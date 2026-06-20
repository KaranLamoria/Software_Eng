#include <stdio.h>

int main() {
    int min[100] = {65, 33, 90, 55, 72, 80, 33};
    int i, choice, summary,highest,pointer = 7;
	float avg;
    
    char fileline[150];
    
    FILE *fp;
    
    do {
        printf("\nEnter the function you want to perform : \n");
       printf("1. New listening minutes \n2. Weekly summary\n3. View All Saved Logs\n4. Exit\nEnter your choice : ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                fp = fopen("music_log.txt", "a");
                if (fp == NULL) {
                    printf("Error opening file!\n");
                    break;
                }
                
                printf("\n--------New Listening Min's--------\n");
                printf("Enter the new log min of the day : ");
                scanf("%d", &min[pointer]);
                
                fprintf(fp, "The music listening min of the day is : %d\n", min[pointer]);
                fclose(fp);
                
                printf("\nThe log was added\n");
                pointer++;
                break;
                
            case 2:  
                summary = 0; 
                avg=0.0;
                
                printf("\n\t\t--------weekly summary --------\n");
                
                
                for(i = pointer - 7; i < pointer; i++) {
                    summary += min[i];
                }
				avg=summary/7.0;//Average music min per week;
				highest=min[pointer-7];//Highest music min in a week
				
				// Added these console prints so the user sees all data instantly without reopening option 3
                printf("Total min music listened last week was : %d min's\n", summary);
                printf("Average daily music minutes: %.2f mins\n", avg);
                printf("Highest single-day peak: %d mins\n", highest);
                
				for(i=pointer-7;i<pointer;i++){
					if(highest<=min[i]){
						highest=min[i];
					}
				}
			
			fp = fopen("music_log.txt", "a");
			
                if (fp != NULL) {	   
					fprintf(fp, "\n-------- WEEKLY SUMMARY REPORT --------\n");
                    fprintf(fp, "Total Listening Minutes: %d mins\n", summary);
                    fprintf(fp, "Average Daily Minutes: %.2f mins\n", avg);
                    fprintf(fp, "Highest Daily Peak: %d mins\n", highest);
                    fprintf(fp, "---------------------------------------\n\n");
                    fclose(fp);
					printf("\nWeekly report successfully saved to music_log.txt!");
					printf("\n\t\t--------------------\n");
                }
                
				
				break;
                
            case 3: 
               printf("\n\n\t\t----------Reading File----------\n");
                
               fp=fopen("music_log.txt","r");
              
               if (fp == NULL) {
                    printf("\n\nno log's were found\n");
                    break;
                }
                
                while(fgets(fileline,150,fp)!=NULL){
                	printf("%s",fileline);
				}
               
			   	fclose(fp);	
				break;
            case 4:
            	printf("\n\n-------Exiting--------\n");
            	break;
            default : 
                printf("\n\nInvalid input!!");
                break;
        }
    } while(choice != 4);
    
    return 0;
}
