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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *h = head;
        if(head == NULL || (head->next == NULL && n == 1)) return NULL;
        int t = 0;
        while(h){
            t++;
            h = h->next;
        }
        h = head;
        if(n == t) return head->next;
        for(int i = 0; i < t - n - 1; i++){
            h = h->next;
        }
        h->next = h->next->next == NULL ? NULL : h->next->next ;
        return head;
    }
};