#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int n,i,d,t;
    struct node *start,*cur,*p;
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
    printf("Node before sorting is");
    cur=start;
    while(cur!=NULL)
    {
        printf("\n%d",cur->data);
        cur=cur->next;
    }
     
for(p=start;p->next!=NULL;p=p->next)
{
     for(cur=p->next;cur!=NULL;cur=cur->next)
     {
        if(p->data>cur->data)
        {
            t=p->data;
            p->data=cur->data;
            cur->data=t;
        }
     }
}

 printf("Node after sorting is");
    cur=start;
    while(cur!=NULL)
    {
        printf("\n%d",cur->data);
        cur=cur->next;
    }

}