#include <stdio.h>
#include <stdlib.h>
 
struct  node
{
    int data;
    struct node *next;
};
int main()
{
    int i,n;
    struct node *start,*cur;
    start=NULL;
    printf("How many nodes");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cur=(struct node *)malloc(sizeof(struct node));
        printf("Enter the number");
        scanf("%d",&cur->data);
        cur->next=start;
        start=cur;

    }
    cur=start;
    while(cur!=NULL)
    {
        printf("%d",cur->data);
        cur=cur->next;
    }
}