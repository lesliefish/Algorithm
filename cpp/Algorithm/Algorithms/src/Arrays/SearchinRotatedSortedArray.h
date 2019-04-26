/** @file   SearchinRotatedSortedArray.h
 *

     Suppose a sorted array is rotated at some pivot unknown to you beforehand.
     (i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
     You are given a target value to search. If found in the array return its index, otherwise return -1.
     You may assume no duplicate exists in the array

 *  @brief
 *  @note
 *  @date   2019/04/24
 */
#pragma once
#include "stdafx.h"

class SearchinRotatedSortedArray
{
public:
    static int search(const vector<int>& nums, int target)
    {
        int first = 0;
        int last = nums.size() - 1;
        while (first != last)
        {
            const int mid = first + (last - first) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }

            if (nums[first] <= nums[mid])
            {
                // ��һ��С�ڵ����м��
                if (nums[first] <= target && target < nums[mid])
                {
                    // target��ǰһ�������ʱ
                    last = mid;
                }
                else
                {
                    // �ں�һ������
                    first = mid + 1;
                }
            }
            else
            {
                // ��һ��ֵ�����м��ֵ
                if (nums[mid] < target && target <= nums[last - 1])
                {
                    // ���Ұ벿��
                    first = mid + 1;
                }
                else
                {
                    last = mid;
                }
            }
            return -1;
        }

    }


    static void test()
    {
        vector<int> nums{ 6,7,8,9,1,2,3,4,5 };
        auto pos = search(nums, 6);
    }
};