class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int temp1,temp2;
        int h=*max_element(nums.begin(),nums.end());
        int m=*min_element(nums.begin(),nums.end());
      
        if(n==1)
            return 1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==h)
                temp1=i;
            if(nums[i]==m)
                temp2=i;
   
        }
    
int max_ind =max(temp1,temp2);// i am still confused with this solution
int min_ind=min(temp1,temp2);
int x=(min_ind+1+n-max_ind);
int y=(max_ind+1);
int z=(n-min_ind);
int a= min(x,y);
return min(a,z);
        
    }
};
