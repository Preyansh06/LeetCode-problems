class Solution {
public:
    string truncateSentence(string s, int k) {
        int n=s.size();
        int space=0;
        for(int i=0;i<n;i++)
       {
            if(s[i]==' ')
                space++;
            if(space==k)
            { 
                s.resize(i);
                return s;
            }
        
       }
        
        return s;
    }
};
