/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeElements(ListNode head, int val) {
        if(head == null){
            return null;
        }
        
        ListNode fast = head.next;
        ListNode slow = head;
        
        while(fast != null){
            if(fast.val==val){
                slow.next = fast.next;
                fast = slow.next;
            }else{
                fast = fast.next;
                slow = slow.next;
            }
        }
        if(head.val == val){
            head = head.next;
        }
        return head;
    }
}
