#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};
void addatbeg(struct node **start);
void addatlast(struct node **start);
void addafter(struct node **start);
void addbefore(struct node **start);
void delfirst(struct node **start);
void dellast(struct node **start);
void deldesire(struct node **start);
void search(struct node **start);
void count(struct node **start);
void sort(struct node **start);
void reverse(struct node **start);
void deldup(struct node **start);
void display(struct node *start);
int main()
{
    struct node *start;
    int x;
    start=NULL;
    while(3!=0)
    {
        printf("\n press 1 for add at beg");
        printf("\n press 2 for add at last");
        printf("\n press 3 for add after desire node");
        printf("\n press 4 for add before desire node");
        printf("\n press 5 for delete first node");
        printf("\n press 6 for delete last node");
        printf("\n press 7 for delete desire node");
        printf("\n press 8 for search desire node");
        printf("\n press 9 for count total nodes");
        printf("\n press 10 for sort the list");
        printf("\n press 11 for reverse the list");
        printf("\n press 12 for delete all duplicate nodes");
        printf("\n press 13 for display the list");
        printf("\n press 14 for quit");
        printf("\n Enter your choice");
        scanf("%d",&x);
        switch(x)
        {
            case 1: addatbeg(&start);break;
            case 2:addatlast(&start);break;
            case 3:addafter(&start);break;
            case 4:addbefore(&start);break;
            case 5:delfirst(&start);break;
            case 6:dellast(&start);break;
            

        }
        
            }
}

