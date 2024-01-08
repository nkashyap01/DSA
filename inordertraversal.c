 #include <stdio.h>
 #include <stdlib.h>
 struct node
 {
    int key;
    struct node *left;
    struct node *right;

 };
 struct node *firstnode(int value)
 {
    struct node *newnode=malloc(sizeof(struct node));
    newnode->key=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;

 }
 struct node *insertnode(struct node *root, int value)
 {
    if(root==NULL)
    {
        return firstnode(value);
    }
    if(root->key<value)
    {
        root->right=insertnode(root->right,value);
    }

else if(root->key>value)
{
    root->left=insertnode(root->left,value);
}
return root;
 }

void inorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d",root->key);
    inorder(root->right);
}

int main()
{
    struct node *root=NULL;
    root=insertnode(root,100);
    root=insertnode(root,50);
    root=insertnode(root,150);
    root=insertnode(root,70);
    inorder(root);
}