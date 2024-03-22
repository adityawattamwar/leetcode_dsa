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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL){
            return true;
        }
        ListNode *slow = head;
        ListNode *fast = head->next;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
       ListNode *holder;
       ListNode *prev= NULL;
       ListNode *temp= slow->next;
       while(temp!=NULL){
           holder=temp->next;
           temp->next=prev;
           prev=temp;
           temp=holder;
       }
       slow->next=prev;
       slow=slow->next;
        while(slow!=NULL){
            if(head->val!=slow->val){
                return false;
            }
            head=head->next;
            slow=slow->next;

        }
        return true;

    }
};