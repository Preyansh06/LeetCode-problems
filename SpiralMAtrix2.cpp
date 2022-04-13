class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left=0,right=n-1;
        int upper=0,lower=n-1;
        vector<vector<int>> res(n,vector<int>(n,0));
        int num=0;
        
        while(left<=right && upper<=lower)
        {
            for(int i=left;i<=right;i++)
            {
                res[upper][i]=++num;
            }
            upper++;
            
            for(int i=upper;i<=lower;i++)
            {
                res[i][right]=++num;
            }
            right--;
           
            for(int i=right;i>=left;i--)
            {
                res[lower][i]=++num;
            }
            lower--;
           

            for(int i=lower;i>=upper;i--)
            {
                res[i][left]=++num;
            }
            left++;
        }
        return res;
    }
};
