// approach 1
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        int count;
        vector<int> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {
            count=1;
            if(nums[i]==nums[i+1])
               
            {
                count++;
            }
            if(count==2)
            {
                res.push_back(nums[i]);
            }
            
        }
        return res;
    }
};
