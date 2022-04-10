class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n=nums.size();
        vector<int> v1;
        vector<int> v2;
        int i,j=0;

        for( i=0;i<n;i++)
        {
            if(i%2==0)
                v1.push_back(nums[i]);
            else
                v2.push_back(nums[i]);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end(),greater<int>());
        i=0;
        
        for(int k=0;k<n;k++)
        {
            if(k%2==0)
                nums[k]=v1[i++];
            else
                nums[k]=v2[j++];
        }
        
        
        return nums;
    }
};
