class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
       int size = nums.size();
       std::unordered_set<int> seen;

       for(int index = 0; index < size; index++)
       {
            if(!seen.count(nums[index]))
            {   
                seen.insert(nums[index]);
            }
            else
            {
                return true;
            }
       }

       return false;
    }


};
