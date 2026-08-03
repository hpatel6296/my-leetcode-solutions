 /* Definition for singly-linked list.

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

    ListNode* deleteDuplicates(ListNode* head) {

        if(head == NULL || head->next == NULL){
            return head;
        }
        
        map<int,int> freq;

        ListNode* temp = head;

        while(temp != NULL){

            freq[temp->val]++;

            temp = temp->next;

        }

        ListNode* temp1 = head;
        ListNode* prev = NULL;
        for(const auto& [key,value] : freq){

            if(value == 1){

            temp1->val = key;
            prev = temp1;
            temp1 = temp1->next;

            }

        }
        if(prev == NULL){
            return prev;
        }
        ListNode* dummy = prev->next;

        prev->next = NULL;

        while(dummy != NULL){

            ListNode* dummy1 = dummy;

            dummy = dummy->next;

            delete dummy1;

        }

        return head;

    }

};