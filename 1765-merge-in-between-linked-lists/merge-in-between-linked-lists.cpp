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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
       ListNode *temp1=list1;
       int ind=0;
       ListNode *holder2=NULL;
       while(temp1!=NULL){
           if(ind==b){
                holder2=temp1->next;
                break;
           }
           ind++;
           temp1=temp1->next;
       }
       ind=1;
       temp1=list1;
       while(temp1!=NULL){
        if(ind==a){
            temp1->next=list2;
            break;
        }
        temp1=temp1->next;
        ind++;
       }
       temp1=list1;
       while(temp1!=NULL){
        if(temp1->next==NULL){
            temp1->next=holder2;
            break;
        }
        temp1=temp1->next;
       }
       return list1;
    }
};