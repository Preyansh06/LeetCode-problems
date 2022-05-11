class Solution {
public:
    int countVowelStrings(int n) {
        vector<vector<int>> res(n+1,vector<int>(5,0));
        
        if(n==1) return 5;
        
        for(int i=0;i<5;i++)
        {
            res[0][i]=1;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<5;j++)
            {
                res[i][j]=accumulate(res[i-1].begin(),res[i-1].begin() + j+1,0);
            }
        }
        return res[n][4];
    }
};
