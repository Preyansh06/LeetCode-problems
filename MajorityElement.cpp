// solution 1 (using unordered map , o(n)- solution)
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
// solution 2 (using map)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),i;
        map<int,int> count;
        for(i=0;i<n;i++)
        {
            count[nums[i]]++;
            if(count[nums[i]]>n/2)
                break;
        }
        
        return nums[i];
        
    }
};

