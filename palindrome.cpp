class Solution {
public:
    bool isPalindrome(int x) {
    long int rem,rev=0;
        int n=x;
        
        while(x!=0)
        {
            rem=x%10;
            rev=rev*10 + rem;
            x=x/10;
            
        }
        if(abs(rev)!=n)
        {
            return 0;
        }
        else
        {
            return 1;
        }
        
    }
};
