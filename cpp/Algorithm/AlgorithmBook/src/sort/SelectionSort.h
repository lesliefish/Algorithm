/** @file   SelectionSort.h
 *  @note   
 * 
 *  @brief  选择排序
 *  @author 
 *  @date   2018/12/19
 */
#pragma once

#include <iostream>
using namespace std;

/*
Step 1 − Set MIN to location 0                  ： 将第1个位置设置为最小值
Step 2 − Search the minimum element in the list ： 找出列表中最小值
Step 3 − Swap with value at location MIN        ： 在最小值位置交换值
Step 4 − Increment MIN to point to next element ： 把最小值指向下一个元素
Step 5 − Repeat until list is sorted            ： 依次反复
*/

namespace
{
    // 交换值
    auto swap(int& a, int& b)
    {
        int c = a;
        a = b;
        b = c;
    };
}

class SelectionSort
{
public:
    /** @fn     SelectionSort::sort
     *  @brief  排序
     *  @param  int * array 传入的数组
     *  @param  const int len 数组长度
     *  @return void
     */
    static void sort(int* array, const int len)
    {
        for (int i = 0; i < len; ++i)
        {
            int indexMin = i;

            for (int j = i + 1; j < len; j++)
            {
                if (array[j] < array[indexMin])
                {
                    indexMin = j;  // find min index
                }
            }

            if (indexMin != i)
            {
                swap(array[i], array[indexMin]);
            }
        }

        display(array, len);
    }

    /** @fn     SelectionSort::display
     *  @brief  顺序打印数组
     *  @param  int * array
     *  @param  const int len
     *  @return void
     */
    static void display(int* array, const int len)
    {
        for (int i = 0; i < len; ++i)
        {
            std::cout << array[i] << " ";
        }

        std::cout << endl;
    }


    /** @fn     SelectionSort::test
     *  @brief  算法测试
     *  @return void
     */
    static void test()
    {
        int array[] = { 4,63,34,43,34,2,23,23 };
        SelectionSort::sort(array, sizeof(array) / sizeof(int));

        int array2[] = { 6,4,43,43,43,4334,43,43,43,43,34 };
        SelectionSort::sort(array2, sizeof(array2) / sizeof(int));
    }
};