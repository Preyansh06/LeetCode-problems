class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        int n=nums1.size();
        int m=nums2.size();
        
        for(int i=0;i<n;i++)
        {
            mp1[nums1[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            mp2[nums2[i]]++;
        }
        for(auto x :mp1)
        {
           for(auto y: mp2)
           {
               if(x.first==y.first)
                   for(int i=0;i<min(x.second,y.second);i++)
                   res.push_back(x.first);
           }
        }
        
  
        
        return res;
    }
};
