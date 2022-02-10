//Given the head of a linked list, rotate the list to the right by k places.

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
    ListNode* rotateRight(ListNode* head, int k) {
        
         if (!head || !k) {return head;}
        int a = k;
        int count{};
        ListNode* cur = head ;
        ListNode* cur2 = head ;
        while (cur->next)
        {
            count++;
            cur = cur->next;
            if(a) {--a;}
            else {cur2 = cur2->next;}
        }
        if (!a)
        {
                cur->next = head;
                head = cur2->next;
                cur2->next = nullptr;
                return head;
        } else {
            return rotateRight(head,k%(count+1));
        }
    }
        

};