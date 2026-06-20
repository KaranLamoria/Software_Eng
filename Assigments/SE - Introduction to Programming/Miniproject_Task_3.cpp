#include <stdio.h>

int main() {
    int min[100] = {65, 33, 90, 55, 72, 80, 33};
    int i, choice, summary;
    int pointer = 7;
    
    FILE *fp;
    
    do {
        printf("\nEnter the function you want to perform : \n");
        printf("1. New listening minutes \n2. Weekly summary\n3. EXIT\nEnter your choice : ");
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
                printf("\n\t\t--------weekly summary--------\n");
                
                
                for(i = pointer - 7; i < pointer; i++) {
                    summary += min[i];
                }
                printf("Total min music listened last week was : %d min's\n", summary);
                break;
                
            case 3: 
                printf("\nExiting\n");
                break;
                
            default : 
                printf("\n\nInvalid input!!");
                break;
        }
    } while(choice != 3);
    
    return 0;
}
