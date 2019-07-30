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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry = 0;
    int sum = 0;
    int ones = 0;
    ListNode* returnNext = new ListNode(0);
    ListNode* temp = returnNext;
    
    while(l1 != NULL || l2 != NULL)
    {
        if(l1 == NULL)
        {
            sum = l2->val + carry;
            l2 = l2->next;
        }
        else if(l2 == NULL)
        {
            sum = l1->val + carry;
            l1 = l1->next;
        }
        else
        {
            sum = l1->val + l2->val + carry;
            l1 = l1->next;
            l2 = l2->next;
        }
        ones = sum%10;
        carry = sum;
        if (carry < 10)
        {
            carry = 0;
        }
        
        while (carry >= 10)  
            carry /= 10;
        temp->next = new ListNode(ones);
        temp = temp->next;

        
    }
    if(carry > 0)
    {
        temp->next = new ListNode(carry);
    }
    return returnNext->next;
    }
};