class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int temp, area, max=0;
        int l=0,r=n-1;
        while(l<r)
        {
            if(h[l]>h[r])
                temp=h[r];
            else
                temp=h[l];
            
            area=(r-l)*temp;
            if(max<area)
                max=area;
            
            if(h[r]<h[l])
                r--;
            else
                l++;
        }

        
       
        return max;
    }
};
