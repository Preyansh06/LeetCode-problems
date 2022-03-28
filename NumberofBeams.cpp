class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int beam=0,s1,s2,temp=0;
        for(int i=0;i<bank.size()-1;i++)
        {
            s1=0;
            s2=0;
            for(int j=0;j<bank[i].size();j++)
            {
                if(bank[i][j]=='1')
                {
                    s1++;//security
                    
                }
                 if(bank[i+1][j]=='1')
                {
                    s2++;//security
                    
                }
            }
            if(s1>0)
            temp=s1;
              beam+=temp*s2;

        }
        return beam;
        
    }
};
