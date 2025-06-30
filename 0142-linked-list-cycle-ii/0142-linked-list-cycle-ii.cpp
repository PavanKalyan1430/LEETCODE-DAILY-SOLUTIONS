/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode* temp = head;
        ListNode* slow = head;
        ListNode* fast = head;

        if (!head or !head->next) return NULL;

        while(fast and fast->next){


            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast){
                while(temp!= slow){
                    slow = slow->next;
                    temp = temp->next;
                }
                return slow;
            }

            
        }

        return NULL;
        
    }
};