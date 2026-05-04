#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

int height(struct TreeNode* root) {
    if (!root) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return (lh > rh ? lh : rh) + 1;
}

struct TreeNode* newNode(int val) {
    if (val == -1) return NULL;
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = node->right = NULL;
    return node;
}

struct TreeNode* buildTree(int* arr, int n) {
    if (n == 0) return NULL;
    struct TreeNode** queue = (struct TreeNode**)malloc(sizeof(struct TreeNode*) * n);
    int front = 0, rear = 0;
    struct TreeNode* root = newNode(arr[0]);
    queue[rear++] = root;
    int i = 1;
    while (i < n) {
        struct TreeNode* curr = queue[front++];
        if (curr) {
            curr->left = newNode(arr[i++]);
            queue[rear++] = curr->left;
            if (i < n) {
                curr->right = newNode(arr[i++]);
                queue[rear++] = curr->right;
            }
        }
    }
    free(queue);
    return root;
}

int main() {
    int N;
    scanf("%d", &N);
    int* arr = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
    struct TreeNode* root = buildTree(arr, N);
    printf("%d\n", height(root));
    free(arr);
    return 0;
}