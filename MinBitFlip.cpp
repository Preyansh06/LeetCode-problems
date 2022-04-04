class Solution {
public:
    int minBitFlips(int start, int goal) {
        int arr[32]={0};
        int arr2[32]={0};
        int i=0,k=0,c=0;
        while(start>0 )
        {
            arr[i]=start%2;
            start=start/2;
            i++;
        }
        while(goal>0 )
        {
            arr2[k]=goal%2;
            goal=goal/2;
            k++;
        }
    for(int j=32-1;j>=0;j--)
    {
        if(arr[j]!=arr2[j])
            c++;
            
    }
        return c;
        
    }
};
