#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 8
void enqueue(int queue[],int *front,int *rear);
void dequeue(int queue[],int *front,int *rear);
void display(int queue[],int front,int rear);
int main()
{
    int queue[max],x,front=-1,rear=-1;
    while(2!=0)
    {
        printf("\n press 1 for enqueue");
        printf("\n press 2 for dequeue");
        printf("\n press 3 for display");
        printf("\n press 4 for exit");
        printf("\n Enter your choice");
        scanf("%d",&x);
        switch(x)
        {
            case 1:enqueue(queue,&front,&rear);break;
            case 2:dequeue(queue,&front,&rear);break;
            case 3:display(queue,front,rear);break;
            case 4:exit(0);
            default:printf("invalid choice");

        }
            }
    
}
void enqueue(int queue[],int *front ,int *rear)
{
    int a;
    if(*rear==max-1)
    {
        printf("queue is full");
        
    }
    else if(*front==-1&&*rear==-1)
    {
        printf("Enter data");
        scanf("%d",&a);
        (*front)++;
        (*rear)++;
        queue[*rear]=a;
            }
            else
            {
                printf("Enter data");
                scanf("%d",&a);
                (*rear)++;
                queue[*rear]=a;
            }

}
void dequeue(int queue[],int *front,int *rear)
{
    if(*front==-1 && *rear==-1)
    {
        printf("queue is empty");
    }
    else if(*front==*rear)
    {
        printf("%d is the last data which is deleted",queue[*front]);
        *front=*rear=-1;
    }
    else
    {
        printf("%d is deleted",queue[*front]);
        (*front)++;
    }
}
void display(int queue[],int front,int rear)
{
    int i;
    if(front==-1&&rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("\n %d",queue[i]);
        }
    }
}