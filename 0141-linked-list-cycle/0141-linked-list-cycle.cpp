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
    bool hasCycle(ListNode *head) {


        if (head == NULL or head->next==NULL) return false;
       // else if (head->next == NULL) return 
        
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast and fast->next){

            if (slow == fast) return true;
            else {
                slow = slow->next;
                fast = fast->next->next;
            }
        }

        return false;

        

    }
};