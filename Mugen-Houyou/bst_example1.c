#include <stdio.h>
#include <stdlib.h>

typedef struct _bstnode {
    int item;
    struct _bstnode *left;
    struct _bstnode *right;
} BSTNode;

int main() {
    BSTNode *root = (BSTNode *)malloc(sizeof(BSTNode)); // 루트 할당
	
    if (root == NULL) {
        printf("메모리 할당 오류!\n");
        return 1;
    }

    root->left = (BSTNode *)malloc(sizeof(BSTNode)); // 루트의 좌측 자식 할당
    if (root->left == NULL) {
        printf("메모리 할당 오류!\n");
        free(root);
        return 1;
    }

    root->item = 12345;
    root->left->item = 5678;

    printf("root: %p, item: %d\n", (void*)root, root->item);
    printf("root->left: %p, item: %d\n", (void*)root->left, root->left->item);
    root->left->left = (BSTNode *)malloc(sizeof(BSTNode));
    if (root->left->left == NULL) {
        printf("메모리 할당 오류!\n");
        free(root->left);
        free(root);
        return 1;
    }

    root->left->left->item = 1111;
    printf("root->left->left: %p, item: %d\n", (void*)root->left->left, root->left->left->item);
	
    free(root->left->left);
    free(root->left);
    free(root);

    return 0;
}
