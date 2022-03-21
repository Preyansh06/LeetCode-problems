class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        vector<int> count;
        int l=boxes.length();
        int total_balls=0,c=0;
     
        for(int i=0;i<l;i++)
        {
        c=0;
            for(int j=0;j<l;j++)
            {
                if((i!=j)&&(boxes[j]=='1'))
                {
                    
                        c+=abs(i-j);
                }
            }
           count.push_back(c);

        }
        return count;
    }
};
