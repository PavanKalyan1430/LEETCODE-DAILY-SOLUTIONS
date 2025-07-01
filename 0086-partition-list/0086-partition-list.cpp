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
       

        
        ListNode* smallhead = new ListNode(0);
        ListNode* greathead = new ListNode(0);

        ListNode* small = smallhead;
        ListNode* great = greathead;

        ListNode* temp = head;

        while(temp){
            if (temp->val < x){
                small->next = new ListNode(temp->val);
                small = small->next;
               
            }
            else {
                great->next= new ListNode(temp->val);
                great = great->next;
                }
            temp = temp->next;
        }
        
        small->next = greathead->next;
        great->next = NULL;

        return smallhead->next;










    }
};