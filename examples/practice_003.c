#include <stdio.h>

// Practice #003: 用指针交换两个变量的值
// 难度: Easy
//
// 题目: 实现函数 swap(int *a, int *b)，让两个变量的值互换。
//
// 背景知识:
//   在 C 里，函数的参数是"复制"过去的。
//   如果你写 swap(int a, int b) 然后在里面交换 a 和 b，
//   只是交换了"副本"，外面的变量根本不会变。
//
//   想真正修改外面的变量，必须传"它们的地址"（指针）。
//   在函数里通过 *p 这种写法，就能改到地址指向的原始值。
//
// 示例:
//   int x = 3, y = 7;
//   swap(&x, &y);
//   现在 x = 7, y = 3
//
// 示例运行:
//   Before: x=3,  y=7
//   After:  x=7,  y=3
//   Before: x=-1, y=100
//   After:  x=100, y=-1
//
// 提示:
//   - 函数签名: void swap(int *a, int *b)
//   - *a 表示"a 这个指针指向的那个变量"
//   - 交换需要一个临时变量 int tmp
//   - 交换的是 *a 和 *b，不是 a 和 b 本身
//   - 调用时用 &x 和 &y 把地址传进去

void swap(int *a, int *b)
{
   int tem = *a;
    *a = *b;
    *b = tem;
    
}

int main(void)
{
    int x1 = 3, y1 = 7;
    printf("Before: x=%d, y=%d\n", x1, y1);
    swap(&x1, &y1);
    printf("After:  x=%d, y=%d   (expected x=7, y=3)\n\n", x1, y1);

    int x2 = -1, y2 = 100;
    printf("Before: x=%d, y=%d\n", x2, y2);
    swap(&x2, &y2);
    printf("After:  x=%d, y=%d   (expected x=100, y=-1)\n\n", x2, y2);

    int x3 = 42, y3 = 42;
    printf("Before: x=%d, y=%d\n", x3, y3);
    swap(&x3, &y3);
    printf("After:  x=%d, y=%d   (expected x=42, y=42)\n", x3, y3);

    return 0;
}
