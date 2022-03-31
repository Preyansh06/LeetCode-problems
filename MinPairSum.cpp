class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int> temp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<=nums.size()/2;i++){
            temp.push_back(nums[i]+nums[nums.size()-i-1]);
        }
        int maxm=INT_MIN;
        for(int i=0;i<temp.size();i++){
            maxm=max(maxm,temp[i]);
        }
        return maxm;
    }
};
//2nd approach but(slow)
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size(),s;
        vector <int> sum;
        int l=0;
        int r=n-1;
        sort(nums.begin(),nums.end());
        for(int l=0;l<n/2;)
        {
            s=nums[l]+nums[r];
            sum.push_back(s);
            l++;
            r--;
            
        }
        int ans= *max_element(sum.begin(),sum.end());
        return ans;
    }
};
