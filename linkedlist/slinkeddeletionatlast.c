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
    struct node *start,*cur,*q;
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
    printf("Node before deletion is");
    cur=start;
    while(cur!=NULL)
    {
        printf("\n%d",cur->data);
        cur=cur->next;
    }
    cur=start;
    while(cur->next!=NULL)
    {
        q=cur;
        cur=cur->next;

    }
    q->next=cur->next;
    free(cur);
    printf("\nNode after deletion is");
    cur=start;
    while(cur!=NULL)
    {
        printf("\n%d",cur->data);
        cur=cur->next;
    }

    }