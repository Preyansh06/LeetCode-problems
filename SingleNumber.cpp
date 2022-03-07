// Passed all Test cases
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int i;
        
        sort(nums.begin(),nums.end());
       for(i=0;i<nums.size()-1;)
        {
            if(nums[i]==nums[i+1])
            {
                i+=2;
            }
           else
           {
               break;
           }
        }
        return nums[i];
    }
};
