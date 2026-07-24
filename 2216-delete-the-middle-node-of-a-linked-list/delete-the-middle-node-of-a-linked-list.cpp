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
    int listLength(ListNode* head){
        ListNode* temp = head;
        int l = 0;
        while(temp != NULL){
            temp = temp->next;
            l++;
        }
        return l;
    }

    ListNode* deleteMiddle(ListNode* head) {

        if(head == NULL || head->next == NULL){
            return NULL;
        }

         int l = listLength(head)/2;
         l--;
         ListNode* temp = head;
         while(l>0){
            temp = temp->next;
            l--;
         }
         if(temp == NULL){
            return head;
         }
         ListNode* temp1 = temp->next;
         temp->next = temp1->next;
         delete temp1;
         return head;
    }
};