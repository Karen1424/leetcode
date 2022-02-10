//Given the head of a singly linked list, sort the list 

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
    ListNode* insertionSortList(ListNode* head) {
        
        std::vector<int> vec;
        ListNode* cur = head;
        while(cur)
        {
            vec.push_back(cur->val);
            cur = cur->next;
        }
        std::sort(vec.begin(),vec.end());
        int i = 0;
        cur = head;
        while(cur)
        {
            cur->val = vec[i++];
            cur = cur->next;
        }
        return head;
    }
    
};