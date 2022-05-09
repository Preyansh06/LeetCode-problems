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
    ListNode* deleteDuplicates(ListNode* head) {
         if(head == NULL) return NULL;
        ListNode* curr=head;
        ListNode* nextptr= head->next;
        
        while(nextptr!=NULL)
        {
            if(nextptr->val==curr->val)
            {
                ListNode* temp=nextptr;
                nextptr=nextptr->next;
                curr->next=nextptr;
                
                delete temp;
            
            }
            else
            {
                curr=nextptr;
                nextptr=nextptr->next;
                
            }
        }
        return head;
    }
};
