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
    struct node *start,*cur,*p;
    int n,i;
    start=NULL;
    printf("How many nodes");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        cur=(struct node *)malloc(sizeof(struct node));
        printf("Enter number");
        scanf("%d",&cur->data);
        if(start==NULL)
        {
            start=cur;
            cur->next=cur;
        }

    else{
        p=start;
        while(p->next!=start)
        {
            p=p->next;
        }
        cur->next=start;
        p->next=cur;
    }
    }

    cur=start;
    while(cur->next!=start)
    {
        printf("\n%d",cur->data);
        cur=cur->next;
    }
    printf("\n %d",cur->data);
}