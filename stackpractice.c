  #include <stdio.h>
  #include <conio.h>
  struct node
  {
    int data;
    struct node *next;
  };
  void push(struct node **top);
  void pop(struct node **top);
  void peek(struct node *top);
  void display(struct node *top);
  int main()
  {
    struct node *top;
    int x;
    top=NULL;
    while(1)
    {
        printf("\n press 1 for push");
        printf("\n press 2 for pop");
        printf("\n press 3 for peek");
        printf("\n press 4 for display");
        printf("\n press for exit");
        printf("\n Enter your choice");
        scanf("%d",&x);
        switch(x)
        {
            case 1:push(&top);break;
            case 2:pop(&top);break;
            case 3:peek(top);break;
            case 4:display(top);break;
            case 5:exit(0);
            default:printf("invalid choice");
        }


    }
  }
void push(struct node **top)
{
    struct node *cur;
    cur=(struct node *)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&cur->data);
    cur->next=*top;
    *top=cur;
}

void pop(struct node **top)

{
    struct node *cur;
    if(*top==NULL)
    {
        printf("stack is empty");
    }
    else{
        cur=*top;
        printf("data which will be deleted is %d",cur->data);
        *top=cur->next;
        free(cur);
    }

}
void peek(struct node *top)
{
    if(top==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        printf("top element is %d",top->data);
    }
}

void display(struct node *top)
{
    struct node *p;
    if(top==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        p=top;
        while(p!=NULL)
        {
            printf("\n%d",p->data);
            p=p->next;
        }
    }
}