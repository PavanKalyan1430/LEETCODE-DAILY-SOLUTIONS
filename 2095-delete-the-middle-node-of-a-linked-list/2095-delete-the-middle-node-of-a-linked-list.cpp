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

        if (head == NULL) return NULL;
        
        ListNode* dummy = new ListNode(-1);

        ListNode* slow = dummy;
        ListNode* fast = dummy;


        dummy->next = head;

        while (fast->next and fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        cout<<slow->val;

        slow->next = slow->next->next;

        return dummy->next;



        


        

    }
};