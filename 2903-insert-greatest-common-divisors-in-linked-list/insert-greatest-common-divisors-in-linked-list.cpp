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
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *temp=head;
        while(temp!=NULL and temp->next!=NULL){
            int hcf=gcd(temp->val,temp->next->val);
            ListNode* holder= new ListNode(hcf);
            holder->next=temp->next;
            temp->next=holder;
            temp=holder->next;
        }
        return head;
    }
};