#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

// find index in inorder
int findIndex(int inorder[], int start, int end, int val) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == val)
            return i;
    }
    return -1;
}

int postIndex;

// build tree
struct Node* buildTree(int inorder[], int postorder[], int start, int end) {
    if (start > end) return NULL;

    struct Node* root = newNode(postorder[postIndex--]);

    if (start == end) return root;

    int inIndex = findIndex(inorder, start, end, root->data);

    // IMPORTANT: build right first
    root->right = buildTree(inorder, postorder, inIndex + 1, end);
    root->left = buildTree(inorder, postorder, start, inIndex - 1);

    return root;
}

// preorder traversal
void preorder(struct Node* root) {
    if (!root) return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

int main() {
    int n;
    scanf("%d", &n);

    int inorder[n], postorder[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &inorder[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &postorder[i]);

    postIndex = n - 1;

    struct Node* root = buildTree(inorder, postorder, 0, n - 1);

    preorder(root);

    return 0;
}