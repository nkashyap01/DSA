#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int main()
{
    int n,i,f,c=0;
    struct node *cur, *start,*p;
    start=NULL;
    
    printf("how many nodes");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

    cur=(struct node *)malloc (sizeof(struct node));
    printf("Enter data");
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
    printf("Enter item to find frequncy");
    scanf("%d",&f);

    cur=start;
    
while(cur!=NULL)
{

   if(cur->data==f)
   {

c++;
   }
   cur=cur->next;
    
}
printf("Total item is %d",c);
    cur=start;
    
while(cur!=NULL)
{

   printf("\n %d",cur->data);
   cur=cur->next; 
}

}



