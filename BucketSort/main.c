#include <stdio.h>

#define SIZE 10

void printArray(int a[], int size);
void bucketSort(int a[], int size);

int main() {

    // 这里的桶的大小为10，所以只能排序 0 - 9 的数字，
    // 如果想排序更大的数字，最直接的方法就是把 SIZE 改大, 或者使用多趟桶排序(就成了基数排序了)。
    int i, a[] = {1,8,4,7,5,2,2}, n = 7;

    printf("\nunsort array: ");
    printArray(a, n);


    bucketSort(a, n);

    printf("\nsort array: ");
    printArray(a, n);

    return 0;
}

void printArray(int a[], int size) {

    printf("[");
    for (int i = 0; i < size; ++i) {
        printf(" %d ", a[i]);
    }
    printf("]\n");
}

void bucketSort(int a[], int size) {
    int bucket[SIZE] = {0}; // 初始化桶
    int idx = 0;

    // 每个元素放入属于自己的桶中
    for (int i = 0; i < size; ++i) {
        bucket[a[i]]++;
    }

    printf("\nbucket array: ");
    printArray(bucket, SIZE);

    // 找到不为0的下标，即使改元素的值
    for (int i = 0; i < SIZE; i++) {
        // 处理多次出现的元素
        // 最理想的情况下，这里只会循环一次，这种情况下的时间复杂度为O(N)
        while (bucket[i]-- > 0) {
            a[idx] = i;
            idx++;
        }
    }
}