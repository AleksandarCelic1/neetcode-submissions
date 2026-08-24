class MinStack {

    private: 
        std::stack<int> regular_stack;
        std::stack<int> min_stack;
    
    public:

        void push(int val)
        {
            if(regular_stack.empty())
            {
                regular_stack.push(val);
                min_stack.push(val);
            }
            else
            {
                regular_stack.push(val);

                if(val <= min_stack.top())
                {
                    min_stack.push(val);
                }
            }
        }

        void pop()
        {
            if(regular_stack.top() == min_stack.top())
            {
                regular_stack.pop();
                min_stack.pop();
            }
            else
            {
                regular_stack.pop();
            }

        }

        int top()
        {
            if(regular_stack.empty())
            {
                return -1;
            }
            
            return regular_stack.top();
        }


        int getMin()
        {
            if(min_stack.empty())
            {
                return -1;
            }

            return min_stack.top();
        }

    
};
