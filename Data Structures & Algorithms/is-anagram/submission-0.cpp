class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        std::unordered_map<char, int> first_str;
        std::unordered_map<char, int> second_str;

        for(int index = 0; index < s.size(); index++)
        {
            char key = s.at(index);
            first_str[key]++;
        }

        for(int index = 0; index < t.size(); index++)
        {
            char key = t.at(index);
            second_str[key]++;
        }

        if(first_str == second_str)
        {
            return true;
        }

        return false;

    }  
};
