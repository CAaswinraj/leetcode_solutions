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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        
        // temp
        // ret
        // while(l1!=NULL || l2!=NULL)
        // value1 = (l1!=NULL)? l1->val:INT_MAX
        // value2 = (l1!=NULL)? l2->val:INT_MAX
        // if(l1->val > l2->val)
        //  add l1->val to ret
        // l1 = l1->next
        // else
        // add l2-> val to ret
        // l2 = l2-> next
        
    
        
        ListNode *ret = new ListNode(0),*a;
        a = ret;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val>l2->val)
            {
                ret->next = new ListNode(l2->val);
                ret = ret->next;
                l2 = l2->next;
            }    
            else
            {    
                ret->next = new ListNode(l1->val);
                ret = ret->next;
                l1 = l1->next;
            }

        }
        if(l1!=NULL)
        {
            ret->next = l1;
            
        }
        else
        {
          ret->next = l2;
        }
        
        return a->next;
    }
};