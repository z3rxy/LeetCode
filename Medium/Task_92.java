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
    public ListNode reverseBetween(ListNode head, int left, int right) {
        ListNode dummy = new ListNode(0);
	        ListNode prev = dummy;
					int m = left, n = right;
	        prev.next = head;

	        ListNode p = head;

	        for (int i = 1; i < m; i++) {
	            prev = p;
	            p = p.next;
	        }

	        ListNode originalFirst = p;
	        for (int i = m; i < n; i++) {
	            ListNode currentHead = prev.next;
	            ListNode futureHead = originalFirst.next;

	            prev.next = futureHead;
	            originalFirst.next = futureHead.next;
	            futureHead.next = currentHead;
	        }

	        return dummy.next;
    }
}