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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<lists.size();i++){
            ListNode* tmp = lists[i];
            while(tmp!=NULL){
                pq.push(tmp->val);
                tmp=tmp->next;
            }
        }
        
        ListNode* tmp = new ListNode(0);
        ListNode* head = tmp;
        while(!pq.empty()){
            tmp->next = new ListNode(pq.top());
            pq.pop();
            tmp = tmp->next;
        }
        return head->next;
    }
};