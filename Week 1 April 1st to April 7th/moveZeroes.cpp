class Solution {
public:
    void moveZeroes(vector<int>& nums) {   
        if(nums.size())
        {
            int temp;
            for(int i = 0; i < nums.size(); i++)
            {
                for(int j = 0; j < nums.size()-i-1;j++)
                {
                    if(nums[j] == 0)
                    {
                        temp = nums[j];
                        nums[j] = nums[j+1];
                        nums[j+1]= temp;
                    }
                }
            }    
        }
        
    }
};