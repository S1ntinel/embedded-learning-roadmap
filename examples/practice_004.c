#include <stdio.h>

// Practice #004: 把数组里的所有元素加上一个偏移量
// 难度: Easy
//
// 题目: 实现函数 addOffset(int *arr, int n, int offset)，
//       让数组里每一个元素都加上 offset。
//       函数没有返回值（void），直接通过指针修改原数组。
//
// 背景:
//   数组名本身就是"指向第一个元素的指针"。
//   所以 int *arr 和 int arr[] 在函数参数里是等价的。
//   你可以用 arr[i] 访问，也可以用 *(arr + i) 访问，效果一样。
//
//   这种"函数直接改外面数组"的写法在嵌入式里到处都是：
//     - 串口收到一帧数据后，给每个字节解密
//     - ADC 采样后，对整个缓冲区做滤波
//     - 把传感器的原始值批量转换成物理量
//
// 示例:
//   nums = {1, 2, 3, 4}, offset = 10
//   调用后 nums = {11, 12, 13, 14}
//
//   nums = {5, 5, 5}, offset = -3
//   调用后 nums = {2, 2, 2}
//
// 提示:
//   - 函数签名: void addOffset(int *arr, int n, int offset)
//   - 用 for 循环遍历下标 0 ~ n-1
//   - 在循环里写 arr[i] = arr[i] + offset; 或者 arr[i] += offset;
//   - 调用时直接传数组名（数组名就是地址，不用加 &）
//   - 思考: 为什么不需要返回新数组？

void addOffset(int *arr, int n, int offset)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] += offset; 
    }
}

// 辅助函数: 打印数组（已经写好，不用改）
void printArray(int *arr, int n)// 定义函数，接受一个整数数组和它的长度
{
    printf("{");// 打印左花括号
    for (int i = 0; i < n; i++)// 遍历数组
    {
        printf("%d", arr[i]);// 打印当前元素
        if (i < n - 1) printf(", ");// 如果不是最后一个元素，打印逗号和空格
    }
    printf("}\n");// 打印右花括号和换行
}

int main(void)
{
    int test1[] = {1, 2, 3, 4};
    printf("Test 1 before: "); printArray(test1, 4);// 输出测试结果
    addOffset(test1, 4, 10);// 传数组名（地址）和长度、偏移量
    printf("Test 1 after:  "); printArray(test1, 4);// 输出修改后的结果
    printf("       expected: {11, 12, 13, 14}\n\n");// 输出预期结果

    int test2[] = {5, 5, 5};// 测试用例 2
    printf("Test 2 before: "); printArray(test2, 3);// 输出测试结果
    addOffset(test2, 3, -3);// 传数组名（地址）和长度、偏移量
    printf("Test 2 after:  "); printArray(test2, 3);    // 输出修改后的结果
    printf("expected: {2, 2, 2}\n\n");// 输出预期结果

    int test3[] = {0};
    printf("Test 3 before: "); printArray(test3, 1);
    addOffset(test3, 1, 100);
    printf("Test 3 after:  "); printArray(test3, 1);
    printf("       expected: {100}\n");

    return 0;
}
