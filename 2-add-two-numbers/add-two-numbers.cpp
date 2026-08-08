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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* temp = &dummy;
        bool carry = false;
        while(l1 != NULL && l2 != NULL){
            int x = l1->val + l2->val;
            if(carry == true){
                x++;
                carry = false;
            }
            if(x>9){
                carry = true;
                x = x%10;
            }
            temp->next = new ListNode(x);
            temp = temp->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1 != NULL){
             int x = l1->val;
            if(carry == true){
                x++;
                carry = false;
            }
            if(x>9){
                carry = true;
                x = x%10;
            }
            temp->next = new ListNode(x);
            temp = temp->next;
            l1 = l1->next;
        }
         while(l2 != NULL){
             int x = l2->val;
            if(carry == true){
                x++;
                carry = false;
            }
            if(x>9){
                carry = true;
                x = x%10;
            }
            temp->next = new ListNode(x);
            temp = temp->next;
            l2 = l2->next;
        }
        if(carry){
            temp->next = new ListNode(1);
            temp = temp->next;
        }
        return dummy.next;
    }
};