class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n=digits.size();
        vector<int> res;
        unordered_set<int> s;
        int digit;
     for(int i=0;i<n;i++)
     {
         if(digits[i]==0)
             continue;
         for(int j=0;j<n;j++)
         {
             for(int k=0;k<n;k++)
             {
                 if(i!=j && j!=k && k!=i)
                 {
                     digit=100*digits[i]+10*digits[j]+digits[k];
                     if(digit%2==0)
                         s.insert(digit);
                 }
             }
         }
     }
        for(auto x: s)
        {
            res.push_back(x);
        }
        sort(res.begin(),res.end());
        return res;
    }
};
