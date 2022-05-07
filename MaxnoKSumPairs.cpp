class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int operations=0;
        sort(nums.begin(),nums.end());
        int l=0,r=n-1;
        while(l<r)
        {
            if(nums[l]+nums[r]==k)
            {
                operations++;
                l++;
                r--;
            }
            else if(nums[l]+nums[r]<k)
                l++;
            else r--;
        }
        
      
        
        return operations;
    }
};
