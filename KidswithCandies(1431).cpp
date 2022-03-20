class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extracandies) {
        int n=candies.size();
        int sum;
        int max= *max_element(candies.begin(),candies.end());
        vector<bool> result;
        for(int i=0;i<n;i++)
        {
            sum=0;
            sum+=candies[i]+extracandies;
                if(sum>=max)
                {
                    result.push_back(1);
                    
            }
                else 
                {
                    result.push_back(0);
                    
                }
            }
        
        return result;
        
    }
};
