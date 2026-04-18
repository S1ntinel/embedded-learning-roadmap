#include <stdio.h>

// Practice #005: 用指针返回多个结果 —— 同时求数组的最大值和最小值
// 难度: Easy-Medium
//
// 题目: 实现函数 findMinMax，扫描一遍数组，
//       同时把最大值和最小值"送"到外面两个变量里。
//
// 背景:
//   C 的函数只能 return 一个值。
//   但现实里经常需要一次算出多个结果：
//     - 同时得到 min 和 max
//     - 同时返回 "结果" 和 "错误码"
//     - ADC 采样同时返回 "电压值" 和 "温度"
//
//   这时候就用"指针输出参数"的模式：
//     函数签名: void func(输入..., 输出指针1, 输出指针2)
//     外面先准备好变量，把它们的地址传进去，函数里通过 *p 写入结果。
//
// 示例:
//   nums = {3, 1, 4, 1, 5, 9, 2, 6}, n = 8
//   调用后: min = 1, max = 9
//
//   nums = {-10, -3, -7}, n = 3
//   调用后: min = -10, max = -3
//
//   nums = {42}, n = 1
//   调用后: min = 42, max = 42
//
// 提示:
//   - 函数签名: void findMinMax(int *arr, int n, int *outMin, int *outMax)
//   - 在函数里先用 arr[0] 初始化 *outMin 和 *outMax
//   - 然后从 i=1 开始遍历（i=0 已经用过了），一次比较就能同时更新 min 和 max
//   - 注意: 写到外面的变量用 *outMin = ...，不是 outMin = ...
//   - 调用时记得传 &min、&max（和 swap 一样的套路）
//
// 思考:
//   - 为什么不直接返回一个结构体？（答: 现在还没学 struct，下一天才讲；
//     在 HAL 库里这种"指针输出参数"的写法其实比结构体更常见）

void findMinMax(int *arr, int n, int *outMin, int *outMax)
{   int(arr[0]);
    *outMin = arr[0];
    *outMax = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < *outMin)
        {
            *outMin = arr[i];
        }
        if(arr[i] > *outMax)
        {
            *outMax = arr[i];
        }
    }
    // 步骤:
    //   1. 用 arr[0] 初始化 *outMin 和 *outMax
    //   2. for 循环从 i=1 遍历到 i<n
    //   3. 如果 arr[i] < *outMin，更新 *outMin
    //   4. 如果 arr[i] > *outMax，更新 *outMax
}

int main(void)
{
    int min, max;   // 先准备好"装结果"的变量

    int test1[] = {3, 1, 4, 1, 5, 9, 2, 6};
    findMinMax(test1, 8, &min, &max);
    printf("Test 1: min=%d, max=%d   (expected min=1, max=9)\n", min, max);

    int test2[] = {-10, -3, -7};
    findMinMax(test2, 3, &min, &max);
    printf("Test 2: min=%d, max=%d   (expected min=-10, max=-3)\n", min, max);

    int test3[] = {42};
    findMinMax(test3, 1, &min, &max);
    printf("Test 3: min=%d, max=%d   (expected min=42, max=42)\n", min, max);

    int test4[] = {7, 7, 7, 7};
    findMinMax(test4, 4, &min, &max);
    printf("Test 4: min=%d, max=%d   (expected min=7, max=7)\n", min, max);

    return 0;
}
