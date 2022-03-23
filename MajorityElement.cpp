// solution 1 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),i;
        unordered_map<int,int> count;
        for(i=0;i<n;i++)
        {
            count[nums[i]]++;
            if(count[nums[i]]>n/2)
                break;
        }
        
        return nums[i];
        
    }
};
