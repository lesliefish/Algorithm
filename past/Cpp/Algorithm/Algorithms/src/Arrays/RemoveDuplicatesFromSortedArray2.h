/** @file   RemoveDuplicatesFromSortedArray2.h

    Follow up for ¡±Remove Duplicates¡±: What if duplicates are allowed at most twice?
    For example, Given sorted array A = [1,1,1,2,2,3],
    Your function should return length = 5, and A is now [1,1,2,2,3]

 *  @brief
 *  @note
 *  @date   2019/04/22
 */
#pragma once

#include "stdafx.h"

class RemoveDuplicatesFromSortedArray2
{
public:
    static int removeDuplicatesFromSortedArray(vector<int>& nums)
    {
        if (nums.size() <= 2)
        {
            return nums.size();
        }

        int index = 2;
        for (int i = 2; i < nums.size(); ++i)
        {
            if (nums[i] != nums[index - 2])
            {
                nums[index] = nums[i];
                index++;
            }
        }

        nums.resize(index);

        return nums.size();
    }

    static void test()
    {
        vector<int> nums{ 1,1,1,2,2,3 };
        auto len = removeDuplicatesFromSortedArray(nums);
    }
};