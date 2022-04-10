class Solution {
public:
    int maxDepth(string s) {
      
        int open=0;
        int maxopen=0;
        for(char  c: s)
        {
            
            if(c=='(')
            {
                open++;
                maxopen= max(maxopen, open);
              
                
            }
            else if(c==')')
            {
               open--;
                
            }
        }
        return maxopen;
    }
};
