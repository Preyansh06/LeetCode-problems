#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> plusOne(vector<int> digits)
    {
        int size = digits.size();
        
        for (int i = size - 1; i >= 0; --i)
        {
            if (digits[i] + 1 > 9)
            {
                digits[i] = digits[i] + 1 - 10;
                if (i == 0)
                    digits.insert(digits.begin(), 1);
            }
            else
            {
                digits[i] = digits[i] + 1;
                break;
            }
        }
        return digits;
    }
};
int main()
{
    Solution s;

    int n;
    cout << "Enter the size :" << endl;
    cin >> n;
    vector<int> arr;
    int input;
    for (int i = 1; i <= n; i++)
    {
        cin >> input;
        arr.push_back(input);
    }
    vector<int> arr2;
    arr2 = s.plusOne(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i]<<" ";
    }
// Below a program to make array elements a digit like 1,2,3 to 123
//  int PlusOne(vector <int> arr)
// {
//     int n=arr.size();
//     int i=0,digit=0;
//     int temp=0,rem;
//     while(temp!=n)
//     {
//         digit=digit*10+arr[i];
//         i++;
//         temp++;
//     }
//     int new_digit=digit+1;
//     int j = n+1;
//     while(new_digit!=0)
//     {
//         rem=new_digit%10;
//         arr[j]=rem;
//         new_digit=new_digit/10;
//         j--;

//     }
//    for (int i = 1; i <= n+1; i++)
//    {
//        cout<<arr[i]<<" ";
//    }

//    return 0;

// }
}