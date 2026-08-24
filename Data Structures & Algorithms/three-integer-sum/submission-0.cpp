class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        if(nums.size() < 3)
        {
            return {{}};
        }

        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> result;

        for(int index = 0; index < nums.size(); index++)
        {
            if(index != 0)
            {
                if(nums[index] == nums[index - 1])
                {
                    continue;
                }
            }

            int front = index + 1;
            int back = nums.size() - 1;
            
            int tmp = nums.at(index);
            while(front < back)
            {
                int sum = tmp + nums[front] + nums[back];
                
                if(sum == 0)
                {
                    result.push_back({tmp, nums[front], nums[back]});
                    front++;
                    while(nums[front] == nums[front - 1] && front < nums.size() - 1) 
                    { 
                        front++; 
                    }

                    back--;
                    while(nums[back] == nums[back + 1] && back > 0) 
                    {    
                        back--; 
                    }
                    
                }
                else if(sum < 0)
                {
                    front++;
                }
                else if(sum > 0)
                {
                    back--;
                }
            }
        }



        return result;
    }


};
