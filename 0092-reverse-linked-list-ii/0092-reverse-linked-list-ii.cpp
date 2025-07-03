

ListNode* reverse(ListNode* head, int count) {
    ListNode* curr = head;
    ListNode* prev = NULL;
    ListNode* front = NULL;

    while (count--) {
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }

    // head is now the tail of reversed part
    head->next = curr;

    return prev;  // New head of reversed sublist
}

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if (!head || left == right) return head;

        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        ListNode* temp = dummy;
        int count = 1;

        // Move to node just before the `left`th node
        while (count < left) {
            temp = temp->next;
            count++;
        }

        ListNode* start = temp;         // Node before reversal
        ListNode* reverseStart = temp->next; // Node at position `left`

        ListNode* newHead = reverse(reverseStart, right - left + 1);

        start->next = newHead;

        return dummy->next;
    }
};
