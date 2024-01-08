#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int n,i,s;
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
   s=cur->data;
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
        if(cur->data<s)
        {
            s=cur->data;
        }
    }
}
printf("small element is %d",s);

cur=start;
while(cur!=NULL)
{
    printf("\n%d",cur->data);
    cur=cur->next;

}
 
}