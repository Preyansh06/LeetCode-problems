class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        stack<int> st;
        int ans=0,s1,s2;
        
        for(auto x : ops)
        {
           
                if(x=="C")
                {
                    st.pop();
                }
                else if(x=="D")
                {
                   st.push(st.top()*2);
                }
                else if(x=="+")
                {
                    s1=st.top();
                    st.pop();
                    s2= s1+ st.top();
                    
                    st.push(s1);
                    st.push(s2);
                    
                }
            else
            {
                 st.push(stoi(x));
            }

            
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
        
    }
};
