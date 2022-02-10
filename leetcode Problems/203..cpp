//Given the head of a linked list and an integer val, remove all the nodes of the linked list 
//that has Node.val == val, and return the new head.

    class Solution {
public:
    ListNode* removeElements(ListNode* head, int val)
    {
        if(!head){return head;}
        while(head && head->val == val) {head = head->next;}
        if(!head){return head;}
        ListNode* cur = head ;
        while(cur->next)
        {
            ListNode* cur2 = cur->next;
            if(cur2->val == val)
            {
                cur->next = cur2->next;
            }
            else if(cur->next)
                cur = cur->next;
        }
        return head;
    }
};

 