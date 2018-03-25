#include <stdio.h>

#define EMPTY 1
#define NOTFOUND -1

typedef char* ElementType;

typedef struct Node {
    ElementType Element;
    struct Node *Next;
} PtrToNode;

typedef PtrToNode* List;
typedef PtrToNode* Position;

int main() {
    PtrToNode node5 = {
            .Element = "E",
            .Next = NULL,
    };

    PtrToNode node4 = {
            .Element = "D",
            .Next = &node5,
    };

    PtrToNode node3 = {
            .Element = "C",
            .Next = &node4,
    };

    PtrToNode node2 = {
            .Element = "B",
            .Next = &node3,
    };

    PtrToNode node1 = {
            .Element = "A",
            .Next = &node2,
    };

    PtrToNode node6 = {
            .Element = "a",
            .Next = NULL,
    };

    List L = &node1;

    printf("%d\n",isEmpty(L)); // 0 is not empty
    printf("%d\n",isLast(&node5));
    printf("%d\n",isLast(&node1));
    printf("Find element %d \n", Find("E", L));
    printf("Delete %d\n", Delete("E",L));
    printf("Find element %d \n", Find("E", L));
    printf("Insert %d\n",Insert("E", L, &node4));
    printf("Insert result %s\n",node4.Next->Element);
    return 0;
}

int isEmpty( List L ) {
    if (L->Next == NULL) {
        return EMPTY;
    }
    return !EMPTY;
}

int isLast (Position P){
    return P->Next == NULL;
}

int Find(ElementType x, List L) {

    Position p = L;
    while (p != NULL) {
        if (x == p->Element) {
            return 1;
        }
        p = p->Next;
    }

    return 0;
}

Position FindPre(ElementType x, List L) {
    Position p = L;
    while (p->Next != NULL) {
        if (p->Next->Element == x) {
            return p;
        }
        p = p->Next;
    }
    return NULL;
}


int Delete(ElementType x, List L) {
    Position p = FindPre(x, L);

    if (p != NULL) {
        p->Next = p->Next->Next;
        return 1;
    }
    return 0;
}

int Insert(ElementType x, List L, Position P) {
    if (Find(P->Element, L) == 0) return NOTFOUND; // Ignore P does not exist.

    Position newNode = malloc(sizeof(PtrToNode));
    if (newNode == NULL) {
        printf("Out of space\n");
        return 0;
    }
    newNode->Element = x;
    newNode->Next = P->Next;

    P->Next = newNode;
    return 1;
}
