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


        if (!head or !head->next) return head;
        
        ListNode* small= new ListNode(-1); 
        ListNode* great = new ListNode(-1);
        ListNode* smallhead = small;
        ListNode* greathead = great;

    


        ListNode* temp = head;

        while(temp){
            if (temp->val < x){
                small->next = temp;
                small = small->next;
            }
            else {
                great->next = temp;
                great = great->next;
            }

            temp = temp->next;
        }

        small->next = greathead->next;
        great->next = NULL;

        return smallhead->next;

    }
};