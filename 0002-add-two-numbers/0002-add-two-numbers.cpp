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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* dummy = new ListNode(-1);
        ListNode* start = dummy;

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int sum , carry =0;

        while(temp1 and temp2){

            sum =  temp1->val + temp2->val + carry;
            carry = sum / 10;
            sum = sum % 10;
            start->next = new ListNode(sum);
            start = start->next;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        while(temp1){
            sum = temp1->val + carry;
            carry = sum / 10;
            start->next = new ListNode(sum % 10);
            start = start->next;
            temp1 = temp1->next;
        }

        while(temp2){
            sum = temp2->val + carry;
            carry = sum / 10;
            start->next = new ListNode(sum % 10);
            start = start->next;
            temp2 = temp2->next;
        }

        if (carry){
            start->next = new ListNode(carry);
        }

        return dummy->next;



       

    }
};