#include <stdio.h>

// Day02 练习2：交换两个变量
//
// 题目：写一个函数 swap，用指针交换两个变量的值
//
// 示例：
//   x = 3, y = 7  -> 交换后 x = 7, y = 3
//
// 提示：需要一个临时变量 temp

void swap(int* a, int* b)
{
    // TODO: 在这里写你的代码
}

int main()
{
    int x = 3, y = 7;
    printf("交换前: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("交换后: x = %d, y = %d\n", x, y);
    printf("结果: %s\n", (x == 7 && y == 3) ? "PASS" : "FAIL");

    return 0;
}
