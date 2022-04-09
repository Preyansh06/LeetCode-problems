class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        int c=0;
        priority_queue<pair<int,int>> pq;
        vector<int> res;
        unordered_map<int,int> mp;
        for(auto x: nums)
            mp[x]++;
        for(auto x: mp)
        {
            pq.push(make_pair(x.second,x.first));
        }
        
        while(c<k)
        {
            res.push_back(pq.top().second);
            pq.pop();
            c++;
            
        }
        return res;
    }
};
