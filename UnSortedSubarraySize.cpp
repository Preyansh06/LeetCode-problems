class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp(nums.begin(),nums.end());
        int n=nums.size();
        sort(temp.begin(),temp.end());
        int left=0,right=n-1;
        while(left<n && temp[left]==nums[left])
        {
            
                left++;
        }
        while(right>left && temp[right]==nums[right])
        {
           
                right--;
        }
        return right+1-left;
    }
};
