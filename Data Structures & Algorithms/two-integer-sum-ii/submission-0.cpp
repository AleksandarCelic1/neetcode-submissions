class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int front = 0; 
        int back = numbers.size() - 1;

        while(front <= back)
        {
            int sum = numbers.at(front) + numbers.at(back);

            if(sum == target)
            {
                return {front + 1, back + 1};
            }
            else if(sum < target)
            {
                front++;
            }
            else
            {
                back--;
            }
        }


        return {0,0};
    
    }
};


