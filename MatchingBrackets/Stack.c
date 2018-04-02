//
// Created by Ju Liaoyuan on 2018/4/2.
//
#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

Stack CreateStack () {
    Stack S;
    S = malloc(sizeof(struct Node));
    if (S == NULL) {
        printf("out of space");
        return NULL;
    }
    S->Next = NULL;
    return S;
}

void push (Stack S, char X) {
    PtrToNode newNode;
    newNode = malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("out of space");
        return;
    }
    newNode->Element = X;
    newNode->Next = S->Next;
    S->Next = newNode;
}

void pop(Stack S) {
    if (isEmpty(S)) {
        printf("Stack is empty. can not pop");
        return;
    }
    PtrToNode top;
    top = S->Next;
    S->Next = top->Next;
    free(top);
}

int isEmpty(Stack S) {
    return S->Next == NULL;
}

char top(Stack S) {
    return S->Next->Element;
}

void printStack(Stack S) {
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
