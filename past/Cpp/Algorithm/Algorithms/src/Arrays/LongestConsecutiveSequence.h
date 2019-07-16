/** @file   RemoveDuplicatesFromSortedArray.h

	Given an unsorted array of integers, find the length of the longest consecutive elements sequence.
	For example, Given [100, 4, 200, 1, 3, 2], The longest consecutive elements sequence is [1, 2, 3, 4].
	Return its length: 4.
	Your algorithm should run in O(n) complexity.
 *  @brief
 *  @note
 *  @date   2019/04/28
 */

#pragma once
#include "stdafx.h"

class LongestConsecutiveSequence
{
public:
	/*
	 * @func   LongestConsecutiveSequence::longestConsecutiveSequence 
	 * @brief  Longest Consecutive Sequence
	 * @param  [in]  const vector<int> & nums  input numbers
	 * @return int  len
	 */ 
	static int longestConsecutiveSequence(const vector<int>& nums)
	{
		unordered_map<int, bool> hashmapUsed{};
		for (auto number : nums)
		{
			hashmapUsed[number] = false;
		}

		int iLongest{ 0 };
		for (auto number : nums)
		{
			if (hashmapUsed[number])
				continue;

			hashmapUsed[number] = true;
			int iLength{ 1 };

			// 比number大的连续数字
			for (int j = number + 1; hashmapUsed.find(j) != hashmapUsed.end(); ++j)
			{
				hashmapUsed[j] = true;
				++iLength;
			}

			// 比number小的连续数字
			for (int j = number - 1; hashmapUsed.find(j) != hashmapUsed.end(); --j)
			{
				hashmapUsed[j] = true;
				++iLength;
			}

			iLongest = max(iLength, iLongest);
		}

		return iLongest;
	}


    static void test()
    {
        vector<int> numsnums{ 1,3,4,6,7,8,9,12,44,5,13 };
		auto len = longestConsecutiveSequence(numsnums);
	}
};