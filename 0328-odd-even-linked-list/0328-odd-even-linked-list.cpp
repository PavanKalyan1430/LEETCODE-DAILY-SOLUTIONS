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
    ListNode* oddEvenList(ListNode* head) {
        
        if (!head || !head->next) return head;
        
        ListNode* oddstart = new ListNode(-1);
        ListNode* evenstart = new ListNode(-1);

        ListNode* odd = oddstart;
        ListNode* even = evenstart;

        ListNode* curr = head;

        while ( curr ){
            odd->next = curr;
            odd = odd->next;
            curr = curr->next;

            if (curr){
                even->next = curr;
                even = even->next;
                curr = curr->next;
            }

        }

        odd->next = evenstart->next;
        even->next = NULL; 

        return oddstart->next;

    }
};