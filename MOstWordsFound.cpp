class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        vector<int> words;
        int i,j,k;
        for(i=0;i<n;i++)
        {
            string s=sentences[i];
            k=1;
            for(j=0;j<sentences[i].size();j++)
            {
            if(s[j]==' ')
                {
                    k++;
                    
                }
            words.push_back(k);
            }
            
        }
        int x= *max_element(words.begin(),words.end());
        return x;
    }
};
