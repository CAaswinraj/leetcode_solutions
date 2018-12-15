
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

  struct node {
      int val;
      node *next;
      ListNode *down;
      node(int x) : val(x), next(NULL), down(NULL) {}
  };

class Solution {
public:
    ListNode* middleNode(ListNode* head)
    {
        if(head == NULL)
            return head;
        node* acc = new node(head->val);
        acc->down = head;
        node* top = acc;
        int count = 1;
        int period = 5;
        
        while(head->next!= NULL)
        {
            period--;
            count++;
            head = head->next;
            if(period == 0)
            {
                period = 5;
                acc->next = new node(head->val);
                acc = acc->next;
                acc->down = head;
            }
        }
        period = 5;
        //count is number of nodes in linked list
        //so we want count/2 + 1th node;
        count = count/2 ;
        int mov = (count)/period;
        int dif = count%period;
        while(mov--)
        {
            cout<<mov;
            top = top->next;
        }
        head = top->down;
        while(dif--)
        {
            head = head->next;
        }
        return head;
        
        
    }
};