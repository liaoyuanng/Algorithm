#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode *PtrToNode;
typedef PtrToNode Tree;

struct TreeNode {
    int Element;
    Tree Left;
    Tree Right;
};

PtrToNode createTree(int element);
void PreOrderTraversal(Tree tree);
void InOrderTraversal(Tree tree);
void PostOrderTraversal(Tree tree);

int main() {

    PtrToNode binaryTree = createTree(1);

    binaryTree->Left = createTree(2);
    binaryTree->Right = createTree(3);
    binaryTree->Left->Left = createTree(4);
    binaryTree->Left->Right = createTree(5);
    binaryTree->Right->Left = createTree(6);
    binaryTree->Right->Right = createTree(7);

    printf("===== 先序遍历 ====\n");
    PreOrderTraversal(binaryTree);

    printf("\n===== 中序遍历 ====\n");
    InOrderTraversal(binaryTree);

    printf("\n===== 后序遍历 ====\n");
    PostOrderTraversal(binaryTree);

    return 0;
}

PtrToNode createTree(int element) {

    PtrToNode node = malloc(sizeof(struct TreeNode));
    if (node == NULL) {
        printf("create fail!!!\n");
        return NULL;
    }
    node->Element = element;
    node->Left = NULL;
    node->Right = NULL;
    return node;
}
// 先序遍历 节点-左子树-右子树
void PreOrderTraversal(Tree tree) {
    if (tree == NULL) {
        return;
    }

    printf("%d ",tree->Element);
    PreOrderTraversal(tree->Left);
    PreOrderTraversal(tree->Right);
}

// 中序遍历 左子树-节点-右子树
void InOrderTraversal(Tree tree) {
    if (tree == NULL) {
        return;
    }

    InOrderTraversal(tree->Left);
    printf("%d ",tree->Element);
    InOrderTraversal(tree->Right);
}

// 后序遍历 左子树-右子树-节点
void PostOrderTraversal(Tree tree) {
    if (tree == NULL) {
        return;
    }

    PostOrderTraversal(tree->Left);
    PostOrderTraversal(tree->Right);
    printf("%d ",tree->Element);
}