class Solution {
public:
    int findMinimumDifference(vector<int>& arr){
        int minDiff = INT_MAX;
        size_t n = arr.size();
        for(size_t i=0; i<n-1; ++i){
            minDiff = min(minDiff, abs(arr.at(i) - arr.at(i+1)));
        }
        return minDiff;
    }
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        size_t n = arr.size();
        
        sort(arr.begin(), arr.end());
        int minDiff = findMinimumDifference(arr);
        vector<vector<int>> res;
        
        for(size_t i=0; i<n-1; ++i){
            int currDiff = abs(arr.at(i) - arr.at(i+1));
            if(currDiff == minDiff){
                vector<int> temp{arr.at(i), arr.at(i+1)};
                sort(begin(temp), end(temp));
                res.push_back(temp);
            }
        }
        return res;
    }
};
