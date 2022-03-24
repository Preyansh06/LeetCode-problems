class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector <int> net_gain;
       
net_gain.push_back(0);
        for(int i=0;i<n;i++)
        {
            
            net_gain.push_back(net_gain[i]+gain[i]);

        }
        int result= *max_element(net_gain.begin(),net_gain.end());
        return result;
    }
};
