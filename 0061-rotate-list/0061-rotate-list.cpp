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
    ListNode* rotateRight(ListNode* head, int k) {

        ListNode* temp = head;
        ListNode* curr = head;
        ListNode* start;
        int count = 1;

        if (!head or !head->next) return head;
        while(temp->next){
            count +=1;
            temp= temp->next;
        }

        k = k % count;

        for(int i=1 ; i<count-k; i++){

            curr = curr->next;

        }

        start = curr->next;
        curr->next = NULL;
        temp->next = head;

        return start;

    }
};