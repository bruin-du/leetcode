#include<stdio.h>
#include<stdlib.h>

typedef struct TreeNode {
    char val;
    struct TreeNode* left;
    struct TreeNode* right;
}TNode;

TNode* SetOrder(const char arr[], int* i)
{
    if (arr[*i] == '#')
    {
        (*i)++;
        return NULL;
    }

    TNode* node = (TNode*)malloc(sizeof(TNode));
    if (node == NULL)
    {
        printf("malloc fail\n");
        exit(-1);
    }
    node->val = arr[(*i)++];
    node->left = SetOrder(arr, i);
    node->right = SetOrder(arr, i);
    return node;
}

void PrevOrder(TNode* node)
{
    if (node == NULL)
        return;
    PrevOrder(node->left);
    printf("%c ", node->val);
    PrevOrder(node->right);
}

int main()
{
    char arr[100];
    scanf("%s", arr);
    int i = 0;
    TNode* node = SetOrder(arr, &i);
    PrevOrder(node);
    free(node);

    return 0;
}