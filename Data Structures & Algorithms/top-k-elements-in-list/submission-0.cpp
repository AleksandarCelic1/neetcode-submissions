class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        std::unordered_map<int, int> frequency;
        std::unordered_set<int> seen;
        std::vector<int> result;

        for(int iterator : nums)
        {
            frequency[iterator]++;

            if(!seen.count(iterator))
            {
                seen.insert(iterator);
            }
        }


        for(int index = 0; index < k; index++)
        {
            int max = -1;
            int to_add = -1;

            for(int iterator : seen)
            {
                if(max < frequency[iterator])
                {
                    max = frequency[iterator];
                    to_add = iterator;
                }
            }


            seen.erase(to_add);
            result.push_back(to_add);
        }


        return result;
    }
};
