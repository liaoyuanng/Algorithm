#include <stdio.h>

/*
 * 使用位操作实现奇偶判断
 * */

int isEven (int input);

int main() {

    int i = 0;
    printf("请输入一个整数\n");
    scanf("%d",&i);
    printf("你输入的数是%s\n", isEven(i) ? "偶数" : "奇数");

    return 0;
}

int isEven (int input)
{
    return !(input & 1);
}