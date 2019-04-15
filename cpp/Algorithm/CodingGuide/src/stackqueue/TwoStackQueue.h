/** @file   TwoStackQueue.h
 *  @brief  ����ջһ������
 *  @note
 *  @date   2019/01/12
 */
#pragma once

#include <stack>

namespace stackqueue
{
    class TwoStackQueue
    {
    public:
        void push(const int value);
        void pop();
        int front();

    public:
        static void test();

    private:
        std::stack<int> m_pushStack{};
        std::stack<int> m_popStack{};
    };

}
