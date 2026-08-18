class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        std::unordered_map<int, int> val_index;

        for(int index = 0; index < nums.size(); index++)
        {
            int key = nums[index];

            val_index[key] = index;
        }


        for(int index = 0; index < nums.size(); index++)
        {
            int num = nums[index];

            int key = target - num;

            if(val_index.count(key))
            {
                int key_index = val_index.at(key);

                if(key_index != index)
                {
                    if(key_index <= index)
                    {
                        return {key_index, index};
                    }
                    else
                    {
                        return {index, key_index};
                    }
                }
            }
        }

        return {};
    }

};
