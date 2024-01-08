#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define max 8
void enqueue(int queue[],int *front,int *rear);
void dequeue(int queue[],int *front,int *rear);
void dispplay(int queue[],int front,int rear);
int main()
{
    int queue[max],x,front=-1,rear=-1;
    while(2!=0)
    {
        printf("\n press 1 for enqueue");
        printf("\n press 2 for dequeue");
        printf("\n press 3 for display");
        printf("\n press 4 for exit");
        printf("\n enter your choice");
        scanf("%d",&x);
        switch(x)
        {
            case 1:enqueue(queue,&front,rear);break;
            case 2:dequeue(queue,&front,&rear);break;
            case 3:display(queue,front,rear);break;
            case 4:exit(0);
            default:printf("invalid choice");
        }


    }
};

void enqueue(int queue[],int *front,int *rear)
{
    int a;
    if(*rear==max-1)
    {
        printf("queue is full");
    }
    else if(*front==-1&&*rear==-1)
    {
        printf("enter data");
        scanf("%d",&a);
        (*front)++;
        (*rear)++;
        queue[*rear]=a;

    }
    else
    {
        printf("Enter data ");
        scanf("%d",&a);
        (*rear)++;
        queue[*rear]=a;

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
