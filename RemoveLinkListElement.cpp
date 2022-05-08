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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* curr;
        ListNode* dummy = new ListNode(-1);
        dummy->next=head;
        
        curr=dummy;
        
        while(curr!=NULL && curr->next!=NULL)
        {
            if(curr->next->val==val)
            {
                ListNode* temp=curr->next;
                curr->next=temp->next;
                delete temp;
            }
            else
                curr=curr->next;
        }
        return dummy->next;
    }
};
