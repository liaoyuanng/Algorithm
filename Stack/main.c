#include <stdio.h>
#include <stdlib.h>
struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode Stack;

struct Node {
    int Element;
    PtrToNode Next;
};

Stack CreateStack();
int isEmpty(Stack S);
void Push(int X, Stack S);
void Pop(Stack S);
void PrintStack(Stack S);

int main() {
    Stack s = CreateStack();

    Push(1,s);
    Push(2,s);
    Push(3,s);
    Pop(s);
    PrintStack(s);

    return 0;
}

int isEmpty(Stack S) {
    return S->Next == NULL;
}

Stack CreateStack() {
    Stack s;
    s = malloc(sizeof(struct Node));
    if (s == NULL) {
        printf("Out of space!");
        return NULL;
    }
    s->Next = NULL;
    return s;
}

void Push(int X, Stack S) {
    PtrToNode new_node;
    new_node = malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Out of space!");
    } else {
        new_node->Element = X;
        new_node->Next = S->Next;
        S->Next = new_node;
    }
}

void Pop(Stack S) {
    PtrToNode top;
    if (isEmpty(S)) {
        printf("Stack is empty!!");
    } else {
        top = S->Next;
        S->Next = S->Next->Next;
        free(top);
    }
}

void MakeEmpty(Stack S) {
    if (S == NULL) {
        printf("Must use CreateStaqk first");
    } else {
        while(!isEmpty(S)) {
            Pop(S);
        }
    }
}

void PrintStack(Stack S) {
    printf("\n---- Stack    Top ----\n");
    if (isEmpty(S)) {
        printf("Empty Stack!\n");
        return;
    }
    PtrToNode top;
    top = S->Next;
    while (top != NULL) {
        printf("[ %d ]\n",top->Element);
        top = top->Next;
    }
    printf("---- Stack Bottom ----\n");
}