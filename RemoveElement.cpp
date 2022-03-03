#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int n = nums.size(), i;
        int count = 0;
        for (i = 1; i <= n; i++)
        {
            if (nums[i] == val)
            {
                count++;
                

                if (i < n)
                    n = n - 1;
                for (int j = i; j < n; j++)
                {
                    nums[j] = nums[j + 1];
                }
            }
        }
        for ( i = 1; i < n; i++)
        {
            cout<<nums[i];
        }
        cout<<endl;
        return n-count;
        
    }
};
int main()
{
    Solution s;
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;

    vector<int> arr;
    int input;
    cout << "Enter array elements:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> input;
        arr.push_back(input);
    }
    int val;
    cout << "Enter the value to be deleted:" << endl;
    cin >> val;
   cout<< s.removeElement(arr, val);
}