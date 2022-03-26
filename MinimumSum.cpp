class Solution {
public:
    int minimumSum(int num) {
      vector<int> nums;
        int i,x,rem;
        for(i=0;i<4;i++)
        {
            x=num%10;
            nums.push_back(x);
            
            num=num/10;
            
        }
        sort(nums.begin(),nums.end());
     int num1 = 10*nums[0] + nums[2];
     int num2 = 10*nums[1] + nums[3];
        return num1+num2;
    }
};
