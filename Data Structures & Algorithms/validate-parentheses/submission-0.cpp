class Solution {
public:
    bool isValid(string s) 
    {
        std::stack<char> container;

        for(int index = 0; index < s.size(); index++)
        {
            char iterator = s.at(index);

            if(iterator != ')' && iterator != '}' && iterator != ']')
            {
                container.push(iterator);
            }
            else
            {
                if(!container.size())
                {
                    return false;
                }

                char tmp = container.top();

                if(tmp == '(' && iterator == ')')
                {
                    container.pop();
                }
                else if(tmp == '{' && iterator == '}')
                {
                    container.pop();
                }
                else if(tmp == '[' && iterator == ']')
                {
                    container.pop();
                }
                else
                {
                    return false;
                }
            }
        }

        return !container.size();
    }     
};
