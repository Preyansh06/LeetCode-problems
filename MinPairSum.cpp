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
