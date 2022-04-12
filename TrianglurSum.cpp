class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> tempnums;
        
        if(n==1)
            return nums[0];
        
        for(int i=0;i<n-1;i++)
          {
            tempnums.push_back((nums[i]+ nums[i+1])%10);
            
          }
        return triangularSum(tempnums);
    }
};
