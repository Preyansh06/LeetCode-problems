class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums;
        int l=0,r=0;
        while(l<n)
        {
            if(nums[l]%2==0)
            {
                swap(nums[l],nums[r]);
                r++;
            }
            l++;
            
        }
        
        return nums;
    }
};
