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
//2nd approach
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        int count;
        vector<int> res;
        unordered_map<int,int> c;
       
        for(int i=0;i<n;i++)
        {
            c[nums[i]]++;
        }
        for(auto x : c)
        {
            if(x.second==2)
                res.push_back(x.first);
        }
        return res;
    }
};
