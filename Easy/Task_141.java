/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */

public class Solution {
    public boolean hasCycle(ListNode head) {
         ListNode temp = new ListNode();
        while (head != null) {
 
           
            if (head.next == null) {
                return false;
            }
 
            if (head.next == temp) {
                return true;
            }
 
            ListNode next = head.next;
 
            head.next = temp;
            head = next;
        }
 
        return false;
    }
}