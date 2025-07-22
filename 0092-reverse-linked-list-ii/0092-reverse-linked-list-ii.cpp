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
ListNode* reverse( ListNode* head, int count){
    ListNode* curr = head;
    ListNode* prev = NULL;
    ListNode* front ;

    while( count-- ){
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;

    }

    head->next = curr;
    return prev;


    
}

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode* start;
        ListNode* start_left;
        ListNode* rev;


        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        dummy->next = head;

        for (int i=1; i<left; i++){
            curr = curr->next;
        }

        start = curr;           //left before node
        start_left = curr->next; // left node (start of reverse)

        rev = reverse(start_left, (right-left) + 1);

        start->next = rev;

        return dummy->next;





    }
};