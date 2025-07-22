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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* curr = head;
        int count = 0;

        while (curr){
            count+=1;
            curr = curr->next;
        }

        if (count == n) return head->next;

        curr = head;

        for (int i=1; i<count-n; i++){
            curr = curr->next;
        }

        curr->next = curr->next->next;
        
        return head;
    }
};