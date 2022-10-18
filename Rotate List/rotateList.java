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
    public int findSize(ListNode head){
        int size = 0;
        ListNode curr = head;
        while(curr!= null){
            curr= curr.next;
            size++;
        }
        return size;
    }
    public ListNode rotateRight(ListNode head, int k) {
        if (head == null || head.next == null){
            return head;
        }
        int size = findSize(head);
        int rem = k%size;
        
        if(rem==0) return head;
        int travel = size-rem;
        
        ListNode curr = head;
        ListNode first = head;
        
        //last node of first list
        int i =1;
        while(i<travel){
            curr =curr.next;
            i++;
        }
        
        //Store the second list
        ListNode temp = curr.next;
        
        //finishing first list
        curr.next = null;
        
        //Traverse to the end of second list to point it to the start of first list
        curr = temp;
        while(curr.next!=null){
            curr = curr.next;
        }
        curr.next=first;
        
        head = temp;
        return head;
    }
    
}
