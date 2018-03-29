#include <stdio.h>

#define SIZE 10

int Max(int a[], int n);
void RadixSort(int a[], int n);

int main() {
    int a[] = {2,3,44,232,423,4,23,44,22};
    RadixSort(a, 9);
    printf("\nsorted [");
    for (int i = 0; i < 9; ++i) {
        printf(" %d ",a[i]);
    }
    printf("]\n");

    return 0;
}
// find max number
int Max(int a[], int n) {
    int max = -1;
    for (int i = 0; i < n; ++i) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

void RadixSort(int a[], int n) {
    int max = Max(a, n);
    // 基数
    int radix = 1;
    // 用于排序的临时数组
    int *sortedArray = calloc(n, sizeof(int));

    while (max / radix > 0) {
        int bucket[SIZE] =  { 0 };
        // 这里和桶排序一个原理
        for (int i = 0; i < n; ++i) {
            bucket[(a[i] / radix) % SIZE] ++;
        }

        // 这里和计数排序一个原理
        for (int i = 1; i < SIZE; ++i) {
            bucket[i] += bucket[i - 1];
        }

        for (int i = n - 1; i >= 0 ; --i) {
            sortedArray[--bucket[a[i] / radix % SIZE]] = a[i];
        }

        for (int i = 0; i < n; ++i) {
            a[i] = sortedArray[i];
        }

        radix *= 10;
    }

    free(sortedArray);
}