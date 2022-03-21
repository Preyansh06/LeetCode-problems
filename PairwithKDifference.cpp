class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0;
        int n=nums.size();
        int d;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                d=abs(nums[i]-nums[j]);
                if((i<j)&&(d==k))
                {
                    count++;
                }
            }
        }
        return count;
        
    }
};
