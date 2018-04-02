#include <stdio.h>
#import "Stack.h"

#define SUCCESS 1
#define FAILURE 0

int matching(Stack S, char a[], int n);

int main() {
    printf("Hello, World!\n");
    Stack s = CreateStack();
    char a[] = {'{','{','[','(',')',']','}','}'};
    int result = matching(s, a, 8);
    printf("meatching %s !!!",result == 1 ? "success" : "failure");
    return 0;
}

int matching(Stack S, char a[], int n) {
    for (int i = 0; i < n; ++i) {

        if (a[i] == '{' || a[i] == '[' || a[i] == '(') {
            push(S, a[i]);
        }

        if (a[i] == '}' || a[i] == ']' || a[i] == ')') {
            if (isEmpty(S)) {
                return FAILURE; // 空栈情况
            }
            if ((top(S) == '{' && a[i] == '}') || (top(S) == '[' && a[i] == ']') || (top(S) == '(' && a[i] == ')')) {
                pop(S);
            } else {
                return FAILURE;
            }
        }
    }
    if (isEmpty(S)) {
        return SUCCESS;
    } else {
        return FAILURE;
    }
}