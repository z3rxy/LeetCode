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
    public ListNode[] splitListToParts(ListNode head, int k) {{
        ListNode temp = head;
        int len = 0;
        while (temp != null) {
            temp = temp.next;
            len++;
        }
        int numNodes = len / k;
        int val = len % k;
        ListNode[] res = new ListNode[k];
        temp = head;
        for (int i = 0; i < k; ++i) {
            ListNode h = temp;
            for (int j = 0; j < numNodes + (i < val ? 1 : 0) - 1; ++j) {
                if (temp != null) temp = temp.next;
            }
            if (temp != null) {
                ListNode prev = temp;
                temp = temp.next;
                prev.next = null;
            }
            res[i] = h;
        }
        return res;
    }
}}