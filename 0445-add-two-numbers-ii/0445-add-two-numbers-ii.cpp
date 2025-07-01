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

        
 ListNode* reverse(ListNode* head){
    ListNode* temp = head;
    ListNode* front;
    ListNode* prev = NULL;

    if (!temp or !temp->next) return temp;

    while(temp){
        front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }

    return prev;
 }
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {


        
        l1 = reverse(l1);
        l2 = reverse(l2);
        int carry = 0;
        ListNode* dummy = new ListNode(-1);
        ListNode* start = dummy;

        while(l1 or l2 or carry){
         int  sum=0;
            
            if (l1){
                cout<<l1->val<<" ";
                sum = sum + l1->val;
                l1= l1->next;
            }
            if (l2){
                sum = sum + l2->val;
                l2 = l2->next;
            }
            // cout<<
            sum += carry;
            carry = sum / 10;
            dummy->next = new ListNode( sum % 10 );
            dummy = dummy->next;

        }

        

        start = reverse(start->next);
        //cout <<start->val;

        return start;
    }
};