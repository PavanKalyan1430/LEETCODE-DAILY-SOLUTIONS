ListNode* reverse(ListNode* head){
    ListNode* curr = head;
    ListNode* prev = NULL;
    ListNode* front;

    while(curr){
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }

    return prev;
}
class Solution {
public:
    void reorderList(ListNode* head) {

        if (!head->next ) return ;

        ListNode* slow = head;
        ListNode* temp = head;
        ListNode* fast = head->next;

        while(fast->next and fast->next->next){

            slow = slow->next;
            fast = fast->next->next;

        }

        ListNode* revNode = reverse(slow->next);        //REVERSE THE LL FROM MIDDLE NODE

        ListNode* result = new ListNode(-1);
        ListNode* merge = result;
        
        while(revNode->next){
            merge->next = temp;
            merge = merge->next ;
            temp = temp->next;

            merge->next = revNode;
            merge = merge->next;
            revNode = revNode->next;
        }

        head = result->next;
    }
};