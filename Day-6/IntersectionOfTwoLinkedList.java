
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int lengthA = length(headA);
        int lengthB = length(headB);
        
        // Adjust the starting points of the pointers
        while (lengthA > lengthB) {
            headA = headA.next;
            lengthA--;
        }
        
        while (lengthB > lengthA) {
            headB = headB.next;
            lengthB--;
        }
        
        // Traverse both lists with two pointers until they meet or reach the end
        while (headA != headB) {
            headA = headA.next;
            headB = headB.next;
        }
        
        return headA; // Return the intersection node or null if there is no intersection
    }
    
    private int length(ListNode head) {
        int length_answer = 0;
        while (head != null) {
            length_answer++;
            head = head.next;
        }
        return length_answer;
    }
}