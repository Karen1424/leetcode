//Given the head of a linked list and a value x, partition it such that all nodes 
//less than x come before nodes greater than or equal to x.
//You should preserve the original relative order of the nodes in each of the two partitions.


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
    ListNode* partition(ListNode* head, int x) {
        
           if(head==nullptr) return head;

           if(head->next==nullptr) 
                return head;
    
            head->next =  partition(head->next,x);
            if(head->val < x) 
                return head;
            else{
                    ListNode* n = head;
                    while(n->next!=nullptr){
                    if(n->val > n->next->val && n->next->val < x){ 
                        int temp = n->val;n->val = n->next->val ; 
                        n->next->val = temp;
                        n = n->next;
                }
                else{
                 break;
               }
           
       }
   }
   return head;
    }
};