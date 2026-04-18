#include <stdio.h>

// Practice #002: 在数组中查找目标值
// 难度: Easy
//
// 题目: 给定整数数组 nums、长度 n 和目标值 target，
//       返回 target 在数组中第一次出现的下标；
//       如果不存在，返回 -1。
//
// 示例:
//   nums = {3, 1, 4, 1, 5}, n = 5, target = 4   -> 输出 2
//   nums = {3, 1, 4, 1, 5}, n = 5, target = 1   -> 输出 1   (返回第一次出现)
//   nums = {3, 1, 4, 1, 5}, n = 5, target = 99  -> 输出 -1
//   nums = {42},            n = 1, target = 42  -> 输出 0
//
// 提示:
//   - 用 for 循环遍历数组
//   - 发现第一个匹配就 return，后面不用再看
//   - 循环结束还没找到，才返回 -1
//   - 想一想：下标从 0 开始还是从 1 开始？

int findIndex(int nums[], int n, int target)
    {
        for(int i = 0; i < n; i++)
            {
                if(nums[i] == target)
                  {
                    return i; 
                  } 
              
            }
        return -1;
    }
    

int main(void)
{
    int test1[] = {3, 1, 4, 1, 5};
    int test2[] = {3, 1, 4, 1, 5};
    int test3[] = {3, 1, 4, 1, 5};
    int test4[] = {42};

    printf("Test 1: %d (expected 2)\n",  findIndex(test1, 5, 4));
    printf("Test 2: %d (expected 1)\n",  findIndex(test2, 5, 1));
    printf("Test 3: %d (expected -1)\n", findIndex(test3, 5, 99));
    printf("Test 4: %d (expected 0)\n",  findIndex(test4, 1, 42));

    return 0;
}
