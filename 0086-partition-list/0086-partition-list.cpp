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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* smallhead = new ListNode(-1);
        ListNode* bighead = new ListNode(-1);
        ListNode* small = smallhead;
        ListNode* big = bighead;
        ListNode* curr = head;

        while(curr != NULL){
            if (curr->val < x){
                small->next = curr;
                small = small->next;
            }

            else {
                big->next = curr;
                big = big->next;
            }

            curr = curr->next;
        }

        small->next = bighead->next;
        big->next = NULL;

        return smallhead->next;
    }
};