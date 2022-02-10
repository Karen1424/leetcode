//Given head, the head of a linked list, determine if the linked list has a cycle in it.

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
    bool hasCycle(ListNode *head) {
        std::set<ListNode *> s;
        ListNode* cur = head;
        while(cur)
        {
            if((s.emplace(cur).second == false)) return true;
            cur = cur->next;
        }
        return false;
    }
};