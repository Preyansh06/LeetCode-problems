class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1,st2;
        
        for(char x : s)
        {
            if(x=='#' && !st1.empty())
                st1.pop();
            else if(x !='#')
                st1.push(x);
        }
         for(auto y: t)
        {
            if(y=='#'  && !st2.empty())
                st2.pop();
            else if(y !='#')
                st2.push(y);
        }

          while(!st1.empty() && !st2.empty())
          {
            if(st1.top() != st2.top())
                return false;
            st1.pop();
            st2.pop();
        }
           if(!st1.empty() || !st2.empty())
           { 
            return false;
        }
        return true;
    }
};
