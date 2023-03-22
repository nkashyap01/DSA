#include<stdio.h>
#include<stdlib.h>
void insert(int);
struct node
{
int data;
struct node *left;
struct node *right;
};
struct node *root;
void main ()
{
int choice,item;
do
{
printf("\nEnter the item which you want to insert?\n");
scanf("%d",&item);
insert(item);
printf("\nPress 0 to insert more ?\n");
scanf("%d",&choice);
}while(choice == 0);
}
void insert(int item)
{
struct node *ptr, *parentptr , *nodeptr;
ptr = (struct node *) malloc(sizeof (struct node));
if(ptr == NULL)
{
printf("can't insert");
}
else
{
ptr -> data = item;
ptr -> left = NULL;
ptr -> right = NULL;
if(root == NULL)
{
root = ptr;
root -> left = NULL;
root -> right = NULL;
}
else
{
parentptr = NULL;
nodeptr = root;
while(nodeptr != NULL)
{
parentptr = nodeptr;
if(item < nodeptr->data)
{
nodeptr = nodeptr -> left;
}
else
{
nodeptr = nodeptr -> right;
}
}
if(item < parentptr -> data)
{
parentptr -> left = ptr;
}
else
{
parentptr -> right = ptr;
}
}
printf("Node Inserted");
}
}

10:53 AM
emoji-icon
three-dots-icon
void deletion(Node*& root, int item)
{
Node* parent = NULL;
Node* cur = root;

search(cur, item, parent);
if (cur == NULL)
return;

if (cur->left == NULL && cur->right == NULL)
{
if (cur != root)
{
if (parent->left == cur)
parent->left = NULL;
else
parent->right = NULL;
}
else
root = NULL;

free(cur);
}
else if (cur->left && cur->right)
{
Node* succ = findMinimum(cur- >right);

int val = succ->data;

deletion(root, succ->data);

cur->data = val;
}

else
{
Node* child = (cur->left)? Cur- >left: cur->right;

if (cur != root)
{
if (cur == parent->left)
parent->left = child;
else
parent->right = child;
}

else
root = child;
free(cur);
}
}

Node* findMinimum(Node* cur)
{
while(cur->left != NULL) {
cur = cur->left;
}
return cur;
}