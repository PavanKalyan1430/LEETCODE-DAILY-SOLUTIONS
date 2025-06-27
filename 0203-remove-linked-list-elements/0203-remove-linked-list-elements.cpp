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
    ListNode* removeElements(ListNode* head, int key) {
        
        ListNode* temp = head;

    
        while(temp and temp->next){

            cout<<temp->val<<" ";

            if (temp->next->val == key ){
                temp->next = temp->next->next;
                
            }
            else temp = temp->next;
        }
        if (head and head->val == key) head = head->next;

       

        return head;

    }
};