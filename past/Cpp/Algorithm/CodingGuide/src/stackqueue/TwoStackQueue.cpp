#include "TwoStackQueue.h"
#include <assert.h>
#include <iostream>
#include <stdexcept>

namespace stackqueue
{
    /****************************************!
     * @brief  push element
     * @param  [in]  const int value  
     * @return void  
     ****************************************/ 
    void TwoStackQueue::push(const int value)
    {
        m_pushStack.push(value);
    }

    /****************************************!
     * @brief  pop front
     * @return void  
     ****************************************/ 
    void TwoStackQueue::pop()
    {
		if (m_popStack.empty() && m_pushStack.empty())
		{
			throw std::out_of_range("m_popStack.empty() && m_pushStack.empty()");
		}

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
     * @brief  get front
     * @return int  
     ****************************************/ 
    int TwoStackQueue::front()
    {
        if(m_popStack.empty() && m_pushStack.empty())
		{
			throw std::out_of_range("m_popStack.empty() && m_pushStack.empty()");
		}

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
