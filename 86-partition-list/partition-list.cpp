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
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* temp = head;
        vector<int> less;
        vector<int> gre;
        while(temp != NULL){
            if(temp->val < x){
                less.push_back(temp->val);
            }
            else{
                gre.push_back(temp->val);
            }
            temp = temp->next;
        }
        if(less.size() == 0){
            return head;
        }
        ListNode* ans = new ListNode(less[0]);
        ListNode* temp1 = ans;
        for(int i=1;i<less.size();i++){
            temp1->next = new ListNode(less[i]);
            temp1 = temp1->next;
        }
        for(int i=0;i<gre.size();i++){
            temp1->next = new ListNode(gre[i]);
            temp1 = temp1->next;
        }
        return ans;
    }
};