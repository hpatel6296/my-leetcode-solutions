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
        int l=1;
        ListNode* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
            l++;
        }
        return l;
    }
    ListNode* middleNode(ListNode* head) {
        int l = listLength(head) / 2;
        ListNode* temp = head;
        while(l>0){
            temp = temp->next;
            l--;
        }
        return temp; 
    }
};