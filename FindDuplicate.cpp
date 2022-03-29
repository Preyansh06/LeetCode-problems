class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size(),i;
        sort(nums.begin(),nums.end());
        for(i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
                break;
        }
        return nums[i];
        
    }
};
