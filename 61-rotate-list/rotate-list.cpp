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
    //striver video soln
    //understood but not very nicely...
    //need to see again nicely
private:
    ListNode* findNthNode(ListNode* temp,int k){
        int cnt = 1;
        while(temp != NULL){
            if(cnt ==k) return temp;
            cnt++;
            temp = temp->next;
        }
        return temp;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0) return head;
        ListNode* tail = head;
        int  length = 1;

        //counting the length of ll
        while(tail->next != NULL){
            tail = tail -> next;
            length += 1;
        }

        //if k==length or multiple of length
        if(k % length == 0) return head;

        k = k % length;

        //attaching the tail to the head
        tail ->next = head;
        ListNode* newLastNode = findNthNode(head,length - k);

        head = newLastNode -> next;
        newLastNode -> next = NULL;

        return head;
    }
};