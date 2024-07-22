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
 class cmp {
     public:
     bool operator()(ListNode* a, ListNode* b){
         if(a->val > b->val)return true;
         else return false;
     }
 };
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>pq;
        for( int i=0;i<lists.size();i++){
            if(lists[i])
            pq.push({lists[i]->val,lists[i]});
        }
        ListNode* temp=new ListNode(-1);
        ListNode* fast=temp;
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            if( it.second->next) pq.push({it.second->next->val,it.second->next});
            fast->next=it.second;
            fast= fast->next;
        }
        return temp->next;
    }
};