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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        ListNode* temp2 = head;
        ListNode* prev;
        while(temp != NULL && n != 0)
        {
            temp = temp->next;
            --n;
        }
        if(temp == NULL)
        {
            ListNode* toDel = head;
            head = head->next;
            delete toDel;
        }
        else if(n == 0)
        {
            prev = temp2;
            while(temp != NULL)
            {
                temp = temp->next;
                prev = temp2;
                temp2 = temp2->next;
            }
            prev->next = temp2->next;
            delete temp2;
        }
        return head;
    }
};