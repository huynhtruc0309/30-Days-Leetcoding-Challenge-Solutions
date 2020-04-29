class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(!nums.empty())
        {
            int sum = nums[0];
            int max = sum; 
            for(int i = 1; i < nums.size(); i++)
            {
                sum = (sum>0 ? sum : 0) + nums[i];
                if(sum>max)
                    max = sum;
            }
            return max;
        }
        return 0;
    }
};