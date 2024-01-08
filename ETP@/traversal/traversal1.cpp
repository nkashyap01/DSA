#include <iostream>
using namespace std;

//Our binary tree node
struct Node
{
int data;
Node* left, * right;
};

//Create a node
Node* create(int data)
{
Node* node = new Node ;
node->data = data;
node->left = node->right = NULL;
return (node);
}

// Insert the nodes in the tree
Node* insert(int arr[], Node* root, int i, int n)
{
if (i < n)
{
Node* temp = create(arr[i]);
root = temp;

// insert left child
root->left = insert(arr,
root->left, 2 * i + 1, n);

// insert right child
root->right = insert(arr, root->right, 2 * i + 2, n);
}
return root;
}


//Print the tree by inorder traversal
void inorder(Node* root)
{
if (root != NULL)
{
inorder(root->left);
cout << root->data <<" ";
inorder(root->right);
}
}

//Main function
int main()
{
int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8};
int n = sizeof(arr)/sizeof(arr[0]);
Node* root = insert(arr, root, 0, n);
inorder(root);
return 0;
}