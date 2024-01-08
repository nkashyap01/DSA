#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int s,n,i,c=0;
    struct node *cur,*start,*p,*q;
     
    start=NULL;
    printf("How many nodes");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cur=(struct node *)malloc(sizeof(struct node));
        printf("Enter number");
        scanf("%d",&cur->data);
        if(start==NULL)
        {
            cur->next=start;
            start=cur;
        }
        else
        {
            p=start;
            while(p->next!=NULL)
            {
                p=p->next;
            }
            cur->next=p->next;
            p->next=cur;
        }

    }
printf("Node before reverse");
cur=start;
while(cur!=NULL)
{
    printf("\n %d",cur->data);
    cur=cur->next;
}


p=NULL;
cur=start;
q=cur->next;
while(cur!=NULL)
{
    cur->next=p;
    p=cur;
    cur=q;
    if(q!=NULL)
    {
 q=q->next;
}
    }
   

     start=p;
     printf("\n nodes after reverse is\n");
     cur=start;
     while(cur!=NULL)
{
    printf("\n %d",cur->data);
    cur=cur->next;
}


}
