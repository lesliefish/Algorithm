/** @file   EnableGetMinStack.h
 *  @brief  获取最小值功能的栈
 *  @note
 *  @date   2019/01/12
 */
#pragma once

#include <stack>

namespace stackqueue
{
    class GetMinStack
    {
    public:
        void push(const int value);
        void pop();
        int getMin();

    public:
        static void test();

    private:
        std::stack<int> m_dataStack{}; // 实际数据存储栈
        std::stack<int> m_minStack{};  // 最小值存储栈
    };
}
