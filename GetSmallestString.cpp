//1663. Smallest String With A Given Numeric Value
class Solution {
public:
    string getSmallestString(int n, int k) {
        string s="abcdefghijklmnopqrstuvwxyz";
        string result;
        int temp;

       while(n!=0)
        {
            temp=k-n+1;
           if(temp>=26)
           {
            result+='z';
               k=k-26;
               n--;
           }
            else
            {
                //result->char[temp];
                result+=s[temp-1];
                k=k-temp;
                n--;
            }
          
        }
        sort(result.begin(),result.end());
        return result;
    }
};
