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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        map<int, bool> mp;
        ListNode *temp=head->next;
        int value=head->val;
        int cnt=1;
        while(temp!=NULL){
            cnt++;
           if(temp->next!=NULL and ((temp->val>value and temp->val>temp->next->val) or (temp->val<value and temp->val<temp->next->val))){
            mp[cnt]=true;
           }
           value=temp->val;
           temp=temp->next;
           
        }
        int number=0;
        for(auto i:mp){
            if(i.second==true){
                number++;
            }
        }
        if(number<2){
            return {-1,-1};
        }
        int index=0;
        temp=head;
        int prev=0;
        while(temp!=NULL){
            index++;
            if(mp[index]==true){
                  prev=index;
                  break;   
            }
            temp=temp->next;
        }
        int store=prev;
        int maxi=0;
        int mini=INT_MAX;
        while(temp!=NULL){
            index++;
            if(mp[index]==true){
               mini=min(mini,(index-prev));
               prev=index;
            }
            temp=temp->next;
        }
        return {mini,(prev-store)};




    }
};