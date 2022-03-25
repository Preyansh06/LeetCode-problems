class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size(),ans;
     unordered_map<int,int> count;
        for(int i=0;i<n;i++)
        {
            count[nums[i]]++;
           
        }
           for(int i=0;i<n;i++)
        {
            if(count[nums[i]]%2!=0)
           return false;
}
        return 1;
    
    }
