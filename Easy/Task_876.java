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
    public ListNode middleNode(ListNode head) {
       int length = 0;
        ListNode temp = head, answer = head;
        while(temp.next != null){
            temp = temp.next;
            length++;
        }
        if(length % 2 == 0){
            for(int i = 0; i < length / 2; i++){
                answer = answer.next;
            }
            return answer;
        }
        else {
            for(int i = 0; i < (length + 1) / 2; i++){
                answer= answer.next;
            }
            return answer;
        }
    }
}