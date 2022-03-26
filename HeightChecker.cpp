class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> x=heights;
       int count=0;
      
        sort(x.begin(),x.end());
                
        for(int i=0;i<heights.size();i++)
        {
             if(x[i]!=heights[i])
                count++;
            
        }

        
        return count;
        
    }
};
