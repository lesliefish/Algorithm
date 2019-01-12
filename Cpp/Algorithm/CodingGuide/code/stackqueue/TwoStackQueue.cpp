#include "TwoStackQueue.h"
#include <assert.h>
#include <iostream>

namespace stackqueue
{
    /****************************************!
     * @brief  入队
     * @param  [in]  const int value  
     * @return void  
     ****************************************/ 
    void TwoStackQueue::push(const int value)
    {
        m_pushStack.push(value);
    }

    /****************************************!
     * @brief  出队
     * @return void  
     ****************************************/ 
    void TwoStackQueue::pop()
    {
        assert(!(m_popStack.empty() && m_pushStack.empty()));

        if (m_popStack.empty())
        {
            while (!m_pushStack.empty())
            {
                int value = m_pushStack.top();
                m_popStack.push(value);
                m_pushStack.pop();
            }
        }

        m_popStack.pop();
    }

    /****************************************!
     * @brief  取队头
     * @return int  
     ****************************************/ 
    int TwoStackQueue::front()
    {
        assert(!(m_popStack.empty() && m_pushStack.empty()));

        if (m_popStack.empty())
        {
            while (!m_pushStack.empty())
            {
                int value = m_pushStack.top();
                m_popStack.push(value);
                m_pushStack.pop();
            }
        }

        return m_popStack.top();
    }

    void TwoStackQueue::test()
    {
        TwoStackQueue myQueue{};
        myQueue.push(9);
        myQueue.push(5);
        std::cout << "front is " << myQueue.front() << std::endl;
        myQueue.pop();
        myQueue.push(4);
        std::cout << "front is " << myQueue.front() << std::endl;
        myQueue.pop();
        myQueue.push(2);
        myQueue.pop();
        std::cout << "front is " << myQueue.front() << std::endl;
        myQueue.push(5);
        myQueue.push(7);
        myQueue.pop();
        std::cout << "front is " << myQueue.front() << std::endl;
    }

}
