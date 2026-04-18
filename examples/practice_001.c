#include <stdio.h>

// Practice #001: 找出数组中的最大值
// 难度: Easy
//
// 题目: 给定整数数组 nums 和长度 n，返回最大值。
//
// 示例:
//   nums = {3, 1, 4, 1, 5}, n = 5  -> 输出 5
//   nums = {-2, -8, -1, -5}, n = 4 -> 输出 -1
//   nums = {42}, n = 1             -> 输出 42
//
// 提示:
//   - 用 for 循环遍历
//   - 用一个变量记住当前最大值
//   - 想想初始值应该设为什么

int findMax(int nums[n], int n)// 定义函数，接受一个整数数组和它的长度
{
    int max = nums[0]; // 初始化为数组的第一个元素
    for(int i = 0; i < n; i++)  // 遍历数组
    {
        if(nums[i] > max)
        {// 如果当前元素比 max 大
            max = nums[i];// 更新 max
        }
    }
    return max;     // 返回最大值
}

int main()  
    int test1[] = {3, 1, 4, 1, 5};  // 测试用例 1
    int test2[] = {-2, -8, -1, -5};
    int test3[] = {42};

    printf("Test 1: %d (expected 5)\n", findMax(test1, 5));// 输出测试结果
    printf("Test 2: %d (expected -1)\n", findMax(test2, 4));
    printf("Test 3: %d (expected 42)\n", findMax(test3, 1));

    return 0;
}
