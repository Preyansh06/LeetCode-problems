class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        int n=s.size();
        char c;
        
        for(int i=0;i<n;i++)
        {
             if(s[i]=='(' || s[i]=='{' || s[i]=='[')
             {
                st.push(s[i]);
                continue;
             }
            if(st.empty())
                return false;
           
            
            if (s[i] ==')'){
                c=st.top();
                st.pop();
                if (c=='{' || c=='['){
                    return false;
                    break;
                }
            }
            if (s[i] =='}'){
                c=st.top();
                st.pop();
                if (c=='(' || c=='['){
                    return false;
                    break;
                }
            }
            if (s[i] ==']'){
                c=st.top();
                st.pop();
                if (c=='{' || c=='('){
                    return false;
                    break;
                }
            }
        }
        return st.empty();
    }
};
