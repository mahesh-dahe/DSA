
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
         if (!head || !head->next) return head; 
    
    ListNode dummy(0); 
    dummy.next = head;
    
    ListNode* prev = &dummy;
    ListNode* curr = head;
    
    while (curr) {
        bool isDuplicate = false;
        while (curr->next && curr->val == curr->next->val) {
            isDuplicate = true;
            ListNode* temp = curr;
            curr = curr->next;
            delete temp;
        }
        
        if (isDuplicate) {
            ListNode* temp = curr;
            curr = curr->next;
            delete temp; 
            continue;
        }
        
        prev->next = curr;
        prev = prev->next;
        curr = curr->next;
    }
    
    prev->next = nullptr; 
    
    return dummy.next;
    }
};