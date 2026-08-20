class Solution {
public:
    bool isPalindrome(string s) 
    {
        for(char& it : s)
        {
            it = std::tolower(it);   
        }

        std::string input;

        for(char& it : s)
        {
            if(std::isalnum(it))
            {
                input.push_back(it);
            }
        }


        int front = 0; 
        int back = input.size() - 1;


        while(front <= back)
        {
            if(input[front] != input[back])
            {
                return false;
            }


            front++;
            back--;
        }


        return true;
    }
};
