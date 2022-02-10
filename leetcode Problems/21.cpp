//You are given the heads of two sorted linked lists list1 and list2.
//Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.
//Return the head of the merged linked list.

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        std::multiset<int> myset;
        
        ListNode* result = new ListNode();
        while(list1){
            myset.emplace(list1->val);
           list1 =  list1->next; 
        }
         while(list2){
            myset.emplace(list2->val);
           list2 =  list2->next; 
        }
        result = result->next;
        for(auto it = myset.rbegin(); it != myset.rend();++it)
         result = new ListNode(*it,result);
        
      return result;
    }
};

