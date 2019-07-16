/** @file   RemoveDuplicatesFromSortedArray.h

    Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
    Do not allocate extra space for another array, you must do this in place with constant memory.
    For example, given input array A = [1,1,2], your function should return length = 2, and A is now [1,2].

 *  @brief
 *  @note
 *  @date   2019/04/17
 */
#pragma once

#include "stdafx.h"

class RemoveDuplicatesFromSortedArray
{
public:
    static int removeDuplicatesFromSortedArray(std::vector<int>& nums)
    {
        if (nums.empty())
        {
            return 0;
        }

        int index = 0;
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[index] != nums[j])
            {
                nums[++index] = nums[j];
            }
        }

        int newLen = ++index;
        nums.resize(newLen);
        return newLen;
    }


    static void test()
    {
        vector<int> nums{ 1,1,1,4,5,6,7,8,9,9,16 };
        auto len = removeDuplicatesFromSortedArray(nums);
    }
};