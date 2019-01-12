/** @file   EnableGetMinStack.h
 *  @brief  ��ȡ��Сֵ���ܵ�ջ
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
        std::stack<int> m_dataStack{}; // ʵ�����ݴ洢ջ
        std::stack<int> m_minStack{};  // ��Сֵ�洢ջ
    };
}
