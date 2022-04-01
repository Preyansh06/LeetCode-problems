class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        int first,second;
        priority_queue<int> res;
        for(auto x: stones)
            res.push(x);
        
        while(res.size()>1)
        {
            first=res.top();
            res.pop();
            second=res.top();
            res.pop();
            
            if(first!=second)
            {
                res.push(first-second);
            }
        }
        if(res.size()==0)
            return 0;
        
        return res.top();
    }
};
