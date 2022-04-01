class Solution {
public:
    int findFinalValue(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        sort(nums.begin(),nums.end());
      for(int i=0;i<n;i++)
      {
          if(nums[i]==k)
          {
              k=k*2;
          }
      }
        return k;
    }
};
