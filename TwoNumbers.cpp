#include <bits/stdc++.h>
// This is 2nd approch to this problem
// HEre we declare 2 pointers left and right , to commute the address of start and end of array
using namespace std;
vector <int> targetSum(vector <int> &a , int &target)
{
    int left = 0 , right = int(a.size()) - 1 , tempSum;
    while(left < right)
    {
        tempSum = a[left] + a[right];
        if(tempSum == target)
            return {left + 1 , right + 1};
        if(tempSum > target)
            right--;
        else
            left++;
    }
    return {-1 , -1};
}
int main()
{
    vector <int> a = {1 , 4 , 5 , 11 , 12};
    int target = 9;
    for(int &x : targetSum(a , target))
        cout << x << " ";
    cout << '\n';
}

// This is most basic or(brute force approch)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter size:";
//     cin >> n;
//     cout << "Enter Target:";
//     int target;
//     cin >> target;
//     int arr[100];
//     cout << "Enter elements in array";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int i, j;

//     for (i = 0; i < n; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == target)
//               {  cout << i << " " << j;
//             break;}
//         }
//     }
// }