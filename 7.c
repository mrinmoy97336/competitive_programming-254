#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

int main() {
    struct Node *root = malloc(sizeof(struct Node));

    printf("Enter root: ");
    scanf("%d", &root->data);

    root->left = NULL;
    root->right = NULL;

    printf("Root = %d", root->data);

    return 0;
}
