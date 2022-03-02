#include<iostream>
#include<vector>
#include <cstdlib>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        for(int i=0; i<n;i++)
        {
            nums1[i+m]=nums2[i];
}
        sort(nums1.begin(),nums1.end());
    }
}
    
};
int main()
{
    Solution s;
    int m;
    cout<<"Enter size of nums1:"<<endl;
    cin>>m;

    int n;
      cout<<"Enter size of nums2:"<<endl;
    cin>>n;

    vector <int> nums1;
    vector <int> nums2;
    int input1,input2;

    for (int i = 1; i <= m; i++)
    {
        cin>>input1;
        nums1.push_back(input1);
    }
    for (int i = 1; i <= n; i++)
    {
        cin>>input2;
        nums2.push_back(input2);
    }

s.merge(nums1,m,nums2,n);
    
    
    

}