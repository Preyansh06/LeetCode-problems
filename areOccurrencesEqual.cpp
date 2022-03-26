class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n=s.length();
       
        unordered_map<char,int> res;
        for(auto c : s)
        {
            res[c]++;
        }
        int freq=res[s[0]];
        for(auto x : res)
        {
            if(x.second!=freq)
            {
                return false;
            }
        }
        return true;
 
    }
};
