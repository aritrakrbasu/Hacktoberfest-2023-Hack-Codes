/*
Step 1- calculate the size of the linked list
Step 2- calulate the indexToSearch from front side of linked List ( size-n)
Step 3- traverse to the previous node to the node which is to be removed and link the previous node to the next of next node.
*/

class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(head.next == null){
            return null;
        }
        
        int size = 0;
        ListNode currNode = head;
        while(currNode!=null){
            size++;
            currNode = currNode.next;
        }
        
		
        int indexToSearch = size-n;
        if(n == size){
            return head.next;
        }
        ListNode prev = head;
        int i =1;
        while(i<indexToSearch){
            prev = prev.next;
            i++;
        }
        prev.next = prev.next.next;
        return head;

    }
}
