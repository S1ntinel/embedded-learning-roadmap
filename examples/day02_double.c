#include <stdio.h>

// Day02 练习4：用指针把值翻倍
//
// 题目：写一个函数 doubleIt，把指针指向的值翻倍
//
// 示例：
//   x = 10 -> doubleIt(&x) -> x = 20
//   x = -3 -> doubleIt(&x) -> x = -6
//
// 提示：*p = *p * 2  或者  *p *= 2

void doubleIt(int* p)
{
    // TODO: 在这里写你的代码
}

int main()
{
    int a = 10;
    doubleIt(&a);
    printf("Test 1: %d (expected 20)\n", a);

    int b = -3;
    doubleIt(&b);
    printf("Test 2: %d (expected -6)\n", b);

    int c = 0;
    doubleIt(&c);
    printf("Test 3: %d (expected 0)\n", c);

    return 0;
}
