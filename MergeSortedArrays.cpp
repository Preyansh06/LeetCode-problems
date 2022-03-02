#include<iostream>
#include<vector>
#include <cstdlib>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int i,j,k;
        vector <int> nums3;
        while (i<m&& j <n)
    {
 
        if (nums1[i] < nums2[j])
            nums3[k++] = nums1[i++];
        else
            nums3[k++] = nums2[j++];
    }
 
    
    while (i < m)
        nums3[k++] = nums1[i++];
 
  
    while (j < n )
        nums3[k++] = nums2[j++];
        
    
    for ( i = 1; i < m+n; i++)
    {
        cout<<nums3[i];
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