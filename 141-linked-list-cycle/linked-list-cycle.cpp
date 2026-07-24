/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 // --> Using HashMap methode 


class Solution {
public:
    bool hasCycle(ListNode *head) {
        //Hash set
        if(head == NULL || head->next == NULL){
            return false;
        }
        unordered_set<ListNode*> node;
        ListNode* temp = head;
        while(temp->next != NULL){
            // if temp is alredy apiarece ones in while 
            if(node.count(temp)>0){
                return true;
            }
            // store temp in node 
            node.insert(temp);
            temp = temp->next;
        }
        return false;
    }
};
/*
--> Using Two poinser Slow and fast where faster travese  fast than slower pointer 

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL){
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};
*/