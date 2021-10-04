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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode head;
        ListNode* tail = &head;
        head.next = NULL;
        while (1){
        if (l1 == NULL){
            tail->next = l2;
            break;
        }
        else if (l2 == NULL){
            tail->next = l1;
            break;
        }
        if (l1->val <= l2->val)
            MoveNode(&(tail->next), &l1);
        else
            MoveNode(&(tail->next), &l2);
 
        tail = tail->next;
    }
        return head.next;
    }
    
    void MoveNode(ListNode** destRef, ListNode** sourceRef){
    ListNode* newNode = *sourceRef;
    assert(newNode != NULL);
     *sourceRef = newNode->next;
     newNode->next = *destRef;
     *destRef = newNode;
}
};