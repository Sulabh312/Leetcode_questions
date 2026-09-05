class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *fast = head, *slow = head;

        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }

        // Odd length: skip middle
        if(fast)
            slow = slow->next;

        // Reverse second half
        ListNode *prev = NULL, *next;

        while(slow) {
            next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }

        // Compare
        while(prev) {
            if(prev->val != head->val)
                return false;

            prev = prev->next;
            head = head->next;
        }

        return true;
    }
};