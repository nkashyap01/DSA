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
    struct node *cur,*start,*p;
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
cur=start;
while(cur!=NULL)
{
    printf("%d",cur->data);
    cur=cur->next;

}
 
}