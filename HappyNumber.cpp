#include <iostream>
#include <stdbool.h>
using namespace std;
int count = 1;
bool isHappy(int n)
{
    count++;
    int rem[100], i = 0, sum = 0;
    while (n != 0)
    {

        rem[i] = n % 10;
        n = n / 10;

        sum += rem[i] * rem[i];
        i++;
    }
    if (sum == 1)
    {
        return true;
    }
    else
    {

        if (count < 1000)
        {
            n = sum;
            isHappy(n);
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the nmuber:";
    cin >> n;
    cout << isHappy(n);
}