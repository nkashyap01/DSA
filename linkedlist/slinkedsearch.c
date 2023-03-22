  #include<stdio.h>
  #include<stdlib.h>
  struct node
  {
    int data;
    struct node *next;
  };
  int main()
  {
    int n,i,s,f=0;
    struct node *start,*cur;
    start=NULL;
    printf("How many nodes");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        cur=(struct node *)malloc(sizeof(struct node));
        printf("Enter the number");
        scanf("%d",&cur->data);
        cur->next=start;
        start=cur;

    }
    printf("which data you want to search");
    scanf("%d",&s);
    for(cur=start;cur!=NULL;cur=cur->next)
    {
        if(cur->data==s)
        {
            printf("found at location:-%d",f+1 );
            printf(" \n");
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
        printf("%d\n",cur->data);
        cur=cur->next;
    }
  }