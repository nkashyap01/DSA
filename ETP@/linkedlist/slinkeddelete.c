#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int n,i;
    struct node *start,*cur;
    start=NULL;
    printf("Enter the number of nodes");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cur=(struct node *)malloc(sizeof(struct node));
        printf("Enter number");
        scanf("%d",&cur->data);
        cur->next=start;
        start=cur;


    }
    printf("all nodes before deletion is:-");
     cur=start;
    while(cur!=NULL)
    {
        printf("\n%d",cur->data);
        cur=cur->next;
    }
     if(start==NULL)
     {
        printf("list is empty");
     }
     else
     {
        cur=start;
        start=cur->next;
        free(cur);

     }
printf("\nall nodes after deletion is:-");
    cur=start;
    while(cur!=NULL)
    {
        printf("\n%d",cur->data);
        cur=cur->next;
    }
}