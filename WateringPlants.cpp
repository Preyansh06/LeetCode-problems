class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n=plants.size();
        int steps=0;
        int can=capacity;
        for(int i=0;i<n;i++)
        {
            if(can<plants[i])
            {
                steps=(2*i)+steps;
                can=capacity;
            }
            
                steps+=1;
            can=can-plants[i];
            
        }
        return steps;
        
    }
};
