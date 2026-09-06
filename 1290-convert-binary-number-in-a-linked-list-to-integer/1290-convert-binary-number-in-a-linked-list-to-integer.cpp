/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode *h = head;
        int n = 0;
        while(h){
            n++;
            h = h->next;
        }
        long ans = 0;
        while(head){
            ans = ans + (head->val * pow(2, --n));
            head = head->next;
        }
        return ans;
    }
};