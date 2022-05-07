/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> nums;
        ListNode* temp;
        temp=head;
        while(temp!=NULL)
        {
            nums.push_back(temp->val);
            temp=temp->next;
        }
        int n=nums.size();
        int ans=0,j=0;
        for(int i=n-1;i>=0;i--)
        {
            ans+=nums[i]*pow(2,j);
            j++;
        }
        return ans;
    }
};
