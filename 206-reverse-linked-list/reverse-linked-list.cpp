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

 // Using Recursion 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // if list is empty or last node 
        if(head == NULL || head->next == NULL){
            return head;
        }
        // Recursive call
        ListNode* newHead = reverseList(head->next);
        
        head->next->next = head;
        head->next = NULL;

        return newHead;
    }
};
/* Using Loop 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      ListNode* prevPtr = NULL;
      ListNode* currPtr = head;
      ListNode* nextPtr;
      while(currPtr != NULL){
        nextPtr = currPtr -> next;
        currPtr -> next = prevPtr;
        
        prevPtr = currPtr;
        currPtr = nextPtr;
      } 
      return prevPtr;
    }
};
*/