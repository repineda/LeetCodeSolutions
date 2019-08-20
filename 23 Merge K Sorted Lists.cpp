/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 1)
        {
            return lists[0];
        }
        if(!lists.empty())
        {
            int temp = 0;
            ListNode* toRet = NULL;
            for(int i = temp; i < lists.size(); i++)
            {
               toRet = mergeTwoLists(toRet, lists[i]);

            }
            return toRet;
        }
        return NULL;
    }
private:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode start(0);
        ListNode *head = &start;
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val <= l2->val)
            {
                head->next = l1;
                l1 = l1->next;
            }
            else{
                head->next = l2;
                l2 = l2->next;
            }
            head = head->next;
        }
        if(l1 != NULL)
        {
            head->next = l1;
        }
        if(l2 != NULL)
        {
            head->next = l2;
        }
        return start.next;
     }

};