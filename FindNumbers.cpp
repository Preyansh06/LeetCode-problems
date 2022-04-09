class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int count,res=0,rem,x;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            count=0;
            x=nums[i];
            while(x>0)
            {
                rem=x%10;
                x=x/10;
                count++;
            }
            v.push_back(count);
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]%2==0)
                res++;
        }
        return res;
    }
};
