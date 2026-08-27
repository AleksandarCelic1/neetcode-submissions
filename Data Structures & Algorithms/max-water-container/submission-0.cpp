class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
       int front = 0;
       int back = heights.size() - 1;

       int result = -1;


       while(front < back)
       {
            int left_bar = heights[front];
            int right_bar = heights[back];

            int width = back - front;
            int height = min(left_bar, right_bar);

            int tmp = height * width;
            if(result < tmp) 
            {
                result = height * width;
            }
            
            if(left_bar < right_bar)
            {
                front++;
            }
            else if(right_bar <= left_bar)
            {
                back--;
            }

       }

       return result;


    }
};
