#include <stdio.h>
#include <stdlib.h>

// define a node struct for the tree
struct node {
    int value;
    struct node *left;
    struct node *right;
};

// function to insert a value into the tree
struct node* insert(struct node* root, int value) {
    if (root == NULL) {
        struct node *newNode = (struct node*) malloc(sizeof(struct node));
        newNode->value = value;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    } else if (value < root->value) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

// function to traverse the tree preorder and print the values
void preorder(struct node* root) {
    if (root) {
        printf("%d ", root->value);
        preorder(root->left);
        preorder(root->right);
    }
}

int main() {
    // initialize the root node
    struct node *root = NULL;

    // insert the values into the tree
    root = insert(root, 22);
    insert(root, 45);
    insert(root, 12);
    insert(root, 32);
    insert(root, 49);
    insert(root, 11);

    // print the preorder traversal of the tree
    preorder(root);
    printf("\n");

    return 0;
}