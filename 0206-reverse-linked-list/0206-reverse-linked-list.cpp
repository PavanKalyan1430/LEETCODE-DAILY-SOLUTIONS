
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* front;

        if (!head || !head->next) return head;
        
        while (curr){

            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front ;

        }

        return prev;


    }
};