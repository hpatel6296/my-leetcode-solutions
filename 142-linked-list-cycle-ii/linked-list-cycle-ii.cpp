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
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> node;
        ListNode *temp = head;
        while(temp != NULL){
            if(node.find(temp) != node.end()){
                return temp;
            }
            node.insert(temp);
            temp = temp->next;
        }
        return NULL;
    }
};