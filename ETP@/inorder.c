 #include <stdio.h>
 #include <stdlib.h>
 struct node
 {
    int value;
    struct node *left;
    struct node *right;
 };
  struct node* insert(struct node* root,int value)
  {
    if(root==NULL)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->value=value;
        newnode->left=NULL;
        newnode->right=NULL;
    }
    else if(value<root->value)
    {
        root->left=insert(root->left,value);

    }
    else
    {
        root->right=insert(root->right,value);
    }
    return root;

  }
  void inorder(struct node *root)
  {
    if(root)
    {
        inorder(root->left);
        printf("%d",root->value);
        inorder(root->right);
    }
  }
  int main()
  {
    struct node *root=NULL;
    root=insert(root,43);
    insert(root,10);
    insert(root,49);
    inorder(root);
    printf("\n");
  }