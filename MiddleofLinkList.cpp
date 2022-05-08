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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* curr=head;
        ListNode* prev=head;
        int c=0;
        while(prev!=NULL)
        {
            ++c;
            prev=prev->next;
        }
        if(c%2==0)
            c=ceil(c/2);
        else
            c=floor(c/2);
        
        while(c>0)
        {
            curr=curr->next;
            --c;
        }
        return curr;
    }
};
