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
        int count =0;

        ListNode* temp = head;
        ListNode* curr = head;

        while(temp){
            temp = temp->next;
            count +=1;
        }

       // cout<<count;

        if (count == n) return head->next;

        for (int i=1; i<count-n; i++){
            curr = curr->next;
        }

        cout<<curr->val;
        curr->next = curr->next->next;

        



        return head;
    }
};