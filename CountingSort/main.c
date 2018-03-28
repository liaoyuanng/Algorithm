#include <stdio.h>
#import <string.h>

int Max(int a[], int n);
void CountingSort(int a[], int n);

int main() {

    int a[] = {2,5,2,9,3};

    printf("\n排序前[ ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ",a[i]);
    }
    printf("]\n");

    CountingSort(a, 5);
    printf("\n排序后[ ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ",a[i]);
    }
    printf("]\n");
    return 0;
}
// find max number
int Max(int a[], int n) {
    int max = -1;
    for (int i = 0; i < n; ++i) {
        if(max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

void CountingSort(int a[], int n) {

    int max = Max(a, n) + 1;
    // alloc 'max' length array.
    int *counting = calloc(max, sizeof(int));

    // 把每个元素的大小，映射在数组的下标上
    for (int i = 0; i < n; ++i) {
        counting[a[i]]++;
    }

    // 计算小于等于 c[i] 的元素个数。这样，就可以得到每个元素应该在数组(排完序后的)位置。
    // 例如这个例子。counting 的 元素为：0 0 1 1 1 1 0 0 0 9.
    // 那么，小于等于第 0 个的，有0个；小于等于第 1 个的，有 0 个；小于等于第 2 个的，有 1 个，小于等于第 3 个的，有 2 个...以此类推
    for (int i = 1; i < max; ++i) {
        counting[i] += counting[i - 1];
    }

    int *temp = calloc(n, sizeof(int));

    // 倒序，为了排序的稳定性
    // 如上所述，小于等于这个元素的个数，就是该元素排序时应该在的位置。需要注意的是，数组是从0开始，所以先要减1。因为上面计算的是小于等于的，所以会包括自身。
    for (int i = n - 1; i >= 0; --i) {
        temp[--counting[a[i]]] = a[i];
    }
    for (int i = 0; i < n; ++i) {
        a[i] = temp[i];
    }
    free(temp);
    free(counting);
}
