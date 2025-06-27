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
    ListNode* deleteMiddle(ListNode* head) {
        
        ListNode* prev ;
        ListNode* slow= head;
        ListNode* fast= head;


        while(fast and fast->next){

            prev = slow;
            slow = slow->next;
            fast = fast->next->next;

        }

        if ( slow and slow->next){
            slow->val = slow->next->val;
            prev->next = slow->next;}

        else prev->next = NULL;

            return head;

        

    }
};