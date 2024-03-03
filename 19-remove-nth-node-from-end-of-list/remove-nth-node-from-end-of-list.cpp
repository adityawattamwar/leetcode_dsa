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
        if(head->next==NULL){
            head=NULL;
            return head;
        }
        ListNode *fast=head;
        ListNode *slow=head;
        int x=0;
        while(x<n and fast!=NULL){
            fast=fast->next;
            x++;
        }
        if(fast==NULL){
            head=head->next;
            return head;
        }
        if(fast!=slow){
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        }
        slow->next=slow->next->next;
        return head;

    }
};