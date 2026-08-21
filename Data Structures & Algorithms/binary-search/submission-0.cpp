class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int front = 0; 
        int back = nums.size() - 1;

        while(front <= back)
        {
            int middle = front + (back - front) / 2;

            if(nums.at(middle) == target) 
            {
                return middle; 
            }

            if(nums.at(middle) < target)
            {
                front = middle + 1;
            }
            else if(nums.at(middle) > target)
            {
                back = middle - 1;
            }
        }


        return -1;
    }
};
