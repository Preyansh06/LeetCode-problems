//1st approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==target)
                    return true;
            }
        }
        return false;
    }
};



// 2nd approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                
            {
                mp[matrix[i][j]]++;
                
            }     
        }
        for(auto x:mp)
        {
            if(x.first==target && x.second>=1)
                return true;
        }
        return false;
    }
};
