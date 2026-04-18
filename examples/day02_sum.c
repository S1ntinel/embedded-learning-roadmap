#include <stdio.h>

// Day02 练习3：数组求和
//
// 题目：写一个函数 sum，返回数组所有元素的和
//
// 示例：
//   {1, 2, 3, 4, 5}, n = 5  -> 输出 15
//   {10, -3, 7}, n = 3      -> 输出 14
//   {42}, n = 1              -> 输出 42
//
// 提示：定义 int total = 0，然后循环累加

int sum(int arr[], int n)
{
    // TODO: 在这里写你的代码
}

int main()
{
    int test1[] = {1, 2, 3, 4, 5};
    int test2[] = {10, -3, 7};
    int test3[] = {42};

    printf("Test 1: %d (expected 15)\n", sum(test1, 5));
    printf("Test 2: %d (expected 14)\n", sum(test2, 3));
    printf("Test 3: %d (expected 42)\n", sum(test3, 1));

    return 0;
}
