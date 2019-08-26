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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode* ltemp = head;
        ListNode* rtemp = head->next;
        ListNode* nextPair = head->next->next;
        ListNode* newHead = rtemp;
        while(ltemp != NULL)
        {
            rtemp->next = ltemp;
            if(nextPair == NULL)
            {
                ltemp->next = NULL;
                break;
            }
            if(nextPair->next == NULL)
            {
                ltemp->next = nextPair;
                break;
            }
            rtemp = nextPair->next;
            ltemp->next = rtemp;
            ltemp = nextPair;
            nextPair = rtemp->next;
        }
        return newHead;
    }
};