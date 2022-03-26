class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;
       int n=nums.size();
        for(int i=0;i<n;i++)
        {
            count[nums[i]]++;
        }
                
        for(int i=0;i<n;i++)
        {
            if(count[nums[i]]>=2)
            {
                return true;
            }
            
        }

                    
        return false;
        
    }
};
