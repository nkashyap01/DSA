 #include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct queue
{
    int data;
    struct queue *next;
};
typedef struct queue queue;

void enqueue(queue **front, queue **rear);
void dequeue(queue **front);
void display(queue *front);

int main()
{
    queue *front, *rear;
    int x;
    front = rear = NULL;
    while (2 != 0)
    {
        printf("\n press 1 for enqueue");
        printf("\n press 2 for dequeue");
        printf("\n press 3 for display");
        printf("\n press 4 for exit");
        printf("\n Enter your choice");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            enqueue(&front, &rear);
            break;
        case 2:
            dequeue(&front);
            break;
        case 3:
            display(front);
            break;
        case 4:
            exit(0);
        default:
            printf("invalid choice");
        }
    }
}

void enqueue(queue **front, queue **rear)
{
    queue *cur;
    cur = (queue *)malloc(sizeof(queue));
    printf("Enter data");
    scanf("%d", &cur->data);
    if (*front == NULL)
    {
        cur->next = *front;
        *front = cur;
        *rear = cur;
    }
    else
    {
        cur->next = (*rear)->next;
        (*rear)->next = cur;
        *rear = cur;
    }
}

void dequeue(queue **front)
{
    queue *cur;
    if (*front == NULL)
    {
        printf("queue is empty");
    }
    else
    {
        printf("%d is deleted", (*front)->data);
        cur = *front;
        *front = cur->next;
        free(cur);
    }
}

void display(queue *front)
{
    queue *p;
    p = front;
    if (front == NULL)
    {
        printf("queue is empty");
    }
    else
    {
        while (p != NULL)
        {
            printf("\n %d", p->data);
            p = p->next;
        }
    }
}