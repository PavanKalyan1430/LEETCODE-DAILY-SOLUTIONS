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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if (!head or !head->next) return head;

        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* curr = dummy;

        
        int  dup ;
        

        while(curr->next and curr->next->next ){
             
             if (curr->next->val == curr->next->next->val ){
                dup = curr->next->val;

                 while (curr->next and curr->next->val == dup ){
                    curr->next = curr->next->next; 
                
                }
            }

            else curr = curr->next;
             

           

        }

        return dummy->next;

        



        

    }
};