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

// function to traverse the tree postorder and print the values
void postorder(struct node* root) {
    if (root) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->value);
    }
}

int main() {
    // initialize the root node
    struct node *root = NULL;

    // insert the values into the tree
    root = insert(root, 35);
    insert(root, 11);
    insert(root, 29);
    insert(root, 44);
    insert(root, 30);
    insert(root, 19);

    // print the postorder traversal of the tree
    postorder(root);
    printf("\n");

    return 0;
}