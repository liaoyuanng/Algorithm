//
// Created by Ju Liaoyuan on 2018/4/2.
//

#ifndef MATCHINGBRACKETS_STACK_H
#define MATCHINGBRACKETS_STACK_H

typedef struct Node *PtrToNode;
typedef PtrToNode Stack;

typedef struct Node {
    char Element;
    PtrToNode Next;
};

Stack CreateStack();
void push(Stack S, char X);
void pop(Stack S);
int isEmpty(Stack S);
char top(Stack S);
void printStack(Stack S);

#endif //MATCHINGBRACKETS_STACK_H
