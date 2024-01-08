#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev,*next;
};
int main()
{
    struct node *start,*cur,*p;
    int n,i;
    start=NULL;
    printf("Enter number of nodes");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cur=(struct node *)malloc(sizeof(struct node));
        printf("Enter number");
        scanf("%d",&cur->data);
        if(start==NULL)
        {
            cur->next=start;
            cur->prev=start;
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
            cur->prev=p;
            p->next=cur;
        }
    }
printf("node before deletion");
    cur=start;
    while(cur!=NULL)
    {
        printf("\n%d",cur->data);
        cur=cur->next;
    }

    cur=start;
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    if(cur==start)
    {
        start=cur->next;
    }
    else{
        cur->prev->next=cur->next;
    }
    free(cur);

    printf("node after deltion");
    cur=start;
    while(cur!=NULL)
    {
        printf("\n%d",cur->data);
        cur=cur->next;
    }
}