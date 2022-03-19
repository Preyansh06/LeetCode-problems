class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int i,result=0;
        sort(nums.begin(),nums.end());
        
        
            result= (nums[n-1-1]-1)*(nums[n-1]-1);
        
        return result;
        
    }
};
