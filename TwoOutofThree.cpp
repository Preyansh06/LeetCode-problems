class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {

        vector<int> ans;
        int c;
        
        for(int i=1;i<=100;i++)
        {
            c=0;
            for(auto x:nums1)
                if(x==i)
                {
                    c++;
                    break;
                }
            for(auto x:nums2)
                if(x==i)
                {
                    c++;
                    break;
                }
            for(auto x:nums3)
                if(x==i)
                {
                    c++;
                    break;
                }
             if(c>1)
               ans.push_back(i);
           
                
        }
       
        return ans;
      
        
    }
};
