#include "GetMinStack.h"
#include <assert.h>
#include <iostream>

namespace stackqueue
{
    /****************************************!
     * @brief  入栈
     * @param  [in]  const int value  
     * @return void  
     ****************************************/ 
    void GetMinStack::push(const int value)
    {
        m_dataStack.push(value);
        if (m_minStack.empty())
        {
            m_minStack.push(value);
        }
        else
        {
            if (value <= m_minStack.top())
            {
                m_minStack.push(value);
            }
        }

        std::cout << "push value " << value << std::endl;
    }

    /****************************************!
     * @brief  出栈
     * @return void  
     ****************************************/ 
    void GetMinStack::pop()
    {
        if (m_dataStack.empty())
        {
            return;
        }

        if (m_minStack.top() == m_dataStack.top())
        {
            m_minStack.pop();
        }

        std::cout << "pop value " << m_dataStack.top() << std::endl;
        m_dataStack.pop();
    }

    /****************************************!
     * @brief  获取最小值
     * @return int  value
     ****************************************/ 
    int GetMinStack::getMin()
    {
        assert(!m_minStack.empty());

        return m_minStack.top();
    }

    /****************************************!
     * @brief  static 测试函数
     * @return void  
     ****************************************/ 
    void GetMinStack::test()
    {
        GetMinStack myStack{};
        myStack.push(9);
        myStack.push(5);
        std::cout << "min is " << myStack.getMin() << std::endl;
        myStack.pop();
        myStack.push(4);
        std::cout << "min is " << myStack.getMin() << std::endl;
        myStack.pop();
        myStack.push(2);
        myStack.pop();
        std::cout << "min is " << myStack.getMin() << std::endl;
        myStack.push(5);
        myStack.push(7);
        myStack.pop();
        std::cout << "min is " << myStack.getMin() << std::endl;
    }
}

