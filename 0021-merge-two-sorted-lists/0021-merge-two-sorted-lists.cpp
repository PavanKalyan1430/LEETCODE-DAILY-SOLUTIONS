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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        if (!temp1) return temp2;
        if (!temp2) return temp1;

        ListNode* dummy = new ListNode(-1);
        ListNode* head = dummy;             

        while( temp1 and temp2){
            if (temp1->val <= temp2->val){
                dummy->next = new ListNode(temp1->val);
                temp1 = temp1->next;
            }

            else {
                dummy->next = new ListNode(temp2->val);
                temp2 = temp2->next;
            }

            dummy = dummy->next;
            
        }

        if (!temp1) dummy->next = temp2;
        else dummy->next = temp1;

        return head->next;



    }
};