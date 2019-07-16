/** @file   ThreeSum.h

    Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique
    triplets in the array which gives the sum of zero.
    Note:
    • Elements in a triplet (a, b, c) must be in non-descending order. (ie, a ≤ b ≤ c)
    • The solution set must not contain duplicate triplets.
    For example, given array S = {-1 0 1 2 -1 -4}.
    A solution set is:
    (-1, 0, 1)
    (-1, -1, 2)

 *  @brief
 *  @note
 *  @author
 *  @date   2019/04/29
 */
#pragma once

#include "stdafx.h"

class ThreeSum
{
public:
    /*
     * @func   ThreeSum::threeSum
     * @brief
     * @param  [in]  vector<int> & nums
     * @return std::vector<std::vector<int>>
     */
    static vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>> result{};
        if (nums.size() < 3)
        {
            return result;
        }

        sort(nums.begin(), nums.end());
        const int iTarget{ 0 };
        auto tailIter = nums.end();
        for (auto curIter = nums.begin(); curIter != nums.end() - 2; ++curIter)
        {
            auto frontIter = curIter + 1;
            if (curIter > nums.begin() && *curIter == *(curIter - 1))
            {
                continue;            // 重复的数字
            }
            auto lastIter = tailIter - 1; // 从右向左
            while (frontIter < lastIter)
            {
                int iSum = *curIter + *frontIter + *lastIter;
                if (iSum > iTarget)
                {
                    // 大于0 右边左移
                    --lastIter;
                    while (*lastIter == *(lastIter + 1) && frontIter < lastIter)
                        --lastIter;
                }
                else if (iSum < iTarget)
                {
                    // 比0小 左边右移
                    ++frontIter;
                    while (*frontIter == *(frontIter - 1) && frontIter < lastIter)
                        ++frontIter;
                }
                else
                {
                    result.push_back({ *curIter, *frontIter, *lastIter });
                    ++frontIter;
                    --lastIter;
                    while (*frontIter == *(frontIter - 1) && *lastIter == *(lastIter + 1) && frontIter < lastIter)
                        ++frontIter;
                }
            }
        }
        return result;
    }

    static void test()
    {
        vector<int> nums{ -1 ,0 ,1 ,2 ,-1 ,-4, };
        auto result = threeSum(nums);
    }

};
