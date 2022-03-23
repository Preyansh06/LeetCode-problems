class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int c;
        vector <int>wealth;
        int i,j,sum=0,max=0;
        for(i=0;i<n;i++)
        {
            c=0;
            for(j=0;j<accounts[i].size();j++)
            {
                c+= accounts[i][j];
               
                
            }
             wealth.push_back(c);
            
        }
        int w= *max_element(wealth.begin(),wealth.end());
        return w;
    }
};
