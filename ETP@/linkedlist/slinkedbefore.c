#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int n,i,a;
    struct node *start,*cur,*p,*q;
    start=NULL;
    printf("Enter the number of nodes");
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
            for(p=start;p->next!=NULL;)
            {

             p=p->next;

            }

        
        
        cur->next=p->next;
        p->next=cur;
        }

    }
    printf("before which do you want to insert");
    scanf("%d",&a);
    p=q=start;
    
    while(p->data!=a&&p!=NULL)
    {
        q=p;
        p=p->next;

    }
    if(p==NULL)
    {
        printf("node does not exist");
    }
    else if(p==start)
    {
        cur=(struct node *)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d",&cur->data);
        cur->next=start;
        start=cur;
            }
            else
            {
                cur=(struct node *)malloc(sizeof(struct node));
                printf("Enter data");
                scanf("%d",&cur->data);
                cur->next=q->next;
                q->next=cur;

            }
    cur=start;
    while(cur!=NULL)
    {
        printf("\n%d",cur->data);
        cur=cur->next;

    }
}