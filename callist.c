#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main(){
    char name[MAX][50]
    char phones[MAX][15]
    int top=-1;
    int choice;
    while(1){
        printf("\n call list operations:\n");
        printf("1.Add call\n");
        printf("2.Remove last call\n");
        printf("3.View call list");
        printf("4.EXit\n");
        printf("enter your choice");
        scanf("%d",&choice);

        if (choice==1){
            if (top==MAX-1){
                printf("call list is full!cannot add more call\n");
            }
            else{
                top++;
                printf("enter name:");
                scanf("%[^\n]",name[top]);
                printf("enter phone number");
                scanf("%[^\n]",phone[top]);
                printf("call from %s(%s)added to list\n",names[top],phone[top]);

            }
        }
        else if(choice==2){
            if top=-1{
                printf("call list is empty!no calls to remove\n");
            }
            else{
                printf("Removing last call from %s(%s).\n,names[top],phones[top]");
                top--;
            }

        }
        / Display operation
        else if (choice == 3) {  
            if (top == -1) {
                printf("Call list is empty.\n");
            } else {
                printf("Recent Calls:\n");
                for (int i = top; i >= 0; i--) {
                    printf("%d. %s (%s)\n", i + 1, names[i], phones[i]);
                }
            }
        }
        // Exit operation
        else if (choice == 4) {  
            printf("Exiting program.\n");
            exit(0);
        }
        // Invalid input
        else {  
            printf("Invalid choice! Please enter a valid option.\n");
        }
    }
return 0;

    }
