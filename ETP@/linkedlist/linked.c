 #include<stdio.h>
 #include<stdlib.h>
 #include<conio.h>
 struct node
 {
    int data;
    struct node *next;

 };
 int main()
 {
    struct node *start,*cur;
    int n,i;
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
  int p=0;
    cur=start;
    while(cur!=NULL)
    {
      int c=0;
       printf("%d",cur->data);
       for(i=1;i<=cur->data;i++)
       {
        if((cur->data)%i==0)
        {
          c++;
          
        }
       }
       cur=cur->next;
       if(c==2)
          {
            p++;
          }
       
          }
          
          printf("Total prime number is %d",p);
 
 
    
 }