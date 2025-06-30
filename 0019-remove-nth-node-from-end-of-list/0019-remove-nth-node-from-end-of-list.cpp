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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
         int pos=1;
       ListNode* temp=head;
       ListNode* temp2;
       while(temp!=NULL){
        count+=1;
        temp=temp->next;
       }
       cout<<count<<endl;
       if (n==count){
        head=head->next;
        return head;
       }
      
        else if(n==1){
        temp=head;
        while(temp->next->next!=NULL){
           
            temp=temp->next;
        }
        temp->next= temp->next->next;
        
        return head;

       }
       else {
        temp=head;
        while(pos<count-n){
            temp=temp->next;
            pos++;
        }
      // ListNode* todel= temp->next;
       temp->next=temp->next->next;
      // delete todel;
       }
       return head;
    }
};