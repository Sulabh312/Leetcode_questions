/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0, lenB = 0;
        ListNode *hA = headA, *hB = headB;
        while(hA){
            lenA++;
            hA = hA-> next;
        }
        while(hB){
            lenB++;
            hB = hB-> next;
        }
        hA = headA;
        hB = headB;
        int diff = abs(lenA - lenB);
        if(lenA > lenB)
            while(diff){
                diff--;
                hA = hA->next;
            }
        else
            while(diff){
                diff--;
                hB = hB->next;
            }
        while(hA){
            if(hA == hB) return hA;
            hA = hA->next;
            hB = hB->next;
        }
        return NULL;
    }
};