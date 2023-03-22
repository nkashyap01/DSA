 #include <stdio.h>
 #include <stdlib.h>
 struct node 
 {
    int data;
    struct node *next;
 };
 int main()
 {
    int n,i,s,f=0;
    struct node *start,*cur,*p;
    start=NULL;
    printf("Enter the number of nodes");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cur=(struct node *)malloc(sizeof(struct node));
        printf("Enter the number");
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
    printf("Enter the data you want to search");
    scanf("%d",&s);
    for(cur=start;cur!=NULL;cur=cur->next)
    {
        if(cur->data==s)
        {
            printf("\nfound at location:-%d",f+1);
            break;
        }
        f++;

    }
    if(cur==NULL)
    {
        printf("not found");
    }
    cur=start;
    while(cur!=NULL)
    {
        printf("\n%d",cur->data);
        cur=cur->next;
    }
 }