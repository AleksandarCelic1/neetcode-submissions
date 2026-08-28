class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int left = 0;
        int right = 1;

        int current = prices.at(left);
        int max = -1;
        int result = 0;


        while(right <= prices.size() - 1)
        {
            int right_number = prices.at(right);

            if(current > right_number)
            {
                current = right_number;
                left = right;
                right++;
            }
            else
            {
                int tmp = right_number - current;

                result = std::max(result, tmp);

                right++;
            }

        }   

        return result;
    }
};
