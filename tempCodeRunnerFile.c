#include <stdio.h>
#include <stdlib.h>

// Define our Binary Tree Data Structure
typedef struct  node {
    int val;
    struct node* left;
    struct node* right;
} Node;

// Insertion function in the tree
Node* insertionBst(int data, Node* root) {
    Node* n = (Node*)malloc(sizeof(Node));
    n->val = data;
    n->left = NULL;
    n->right = NULL;

    Node* temp = root;
    Node* parentTemp = NULL;

    if (root == NULL) {
        return n;
    }

    while (temp != NULL) {
        parentTemp = temp;
        if (temp->val < data) {
            temp = temp->right;
        } else {
            temp = temp->left;
        }
    }

    if (parentTemp->val < data) {
        parentTemp->right = n;
    } else {
        parentTemp->left = n;
    }

    return root;
}

void inorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }

    inorderTraversal(root->left);
    printf("%d ", root->val);
    inorderTraversal(root->right);
}

int main() {
    int n;
    printf("How many nodes do you want to insert: ");
    scanf("%d", &n);
    int newData;
    Node* root = NULL;
    
    for (int i = 1; i <= n; i++) {
        printf("Give data of node %d: ", i);
        scanf("%d", &newData);
        root = insertionBst(newData, root);
    }

    printf("Inorder Traversal: ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
