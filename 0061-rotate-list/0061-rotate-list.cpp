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
        int count = 1;

        if (!head or !head->next or k==0 ) return head;



        while(temp->next){
            count+=1;
            temp= temp->next;
        }

        
        k = k % count;
        

        for (int i=1; i<count-k ; i++){
            curr = curr->next;
        }
        
        temp->next = head;

        ListNode* curr_2 = curr->next;
        curr->next = NULL;

        return curr_2;

        // ListNode* start = curr_2;


        // while(curr_2 and curr_2->next){
        //     curr_2 = curr_2->next;
        // }

        // if (curr_2) curr_2->next = head;
        // else return head;
        // return start;



    }
};