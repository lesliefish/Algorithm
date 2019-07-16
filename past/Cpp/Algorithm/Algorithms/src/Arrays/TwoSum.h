/** @file   TwoSum.h

     Given an array of integers, return indices of the two numbers such that they add up to a specific target.
     You may assume that each input would have exactly one solution, and you may not use the same element twice.

     Example:
     Given nums = [2, 7, 11, 15], target = 9,

     Because nums[0] + nums[1] = 2 + 7 = 9,
     return [0, 1].

 *  @date   2019/04/16
 */
#pragma once
#include "stdafx.h"


class Solution
{
public:

    static vector<int> twoSum(const std::vector<int>& nums, int target) 
    {
        vector<int> result{};
        unordered_map<int, int> umap{};
        for (int i = 0; i < nums.size(); ++i)
        {
            int curValue = nums[i];
            auto findIter = umap.find(target - curValue);
            if (findIter == umap.end())
            {
                umap[curValue] = i;
            }
            else
            {
                result.emplace_back(i);
                result.emplace_back(findIter->second);
                break;
            }
        }

        return result;
    }
};