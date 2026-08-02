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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> nums;
        if(head == NULL || left == right){
            return head;
        }
        int position = 1;
        ListNode* temp = head;
        while(temp->next != NULL && position < left){
            temp = temp->next;
            position++;
        }
        ListNode* temp1 = temp;
        while(temp1->next != NULL && position < right){
            nums.push_back(temp1->val);
            temp1 = temp1->next;
            position++;
        }
        nums.push_back(temp1->val);
        temp1 = temp1->next;
        int n = nums.size()-1;
        while(n>=0 && temp!=NULL){
            temp->val = nums[n];
            temp = temp->next;
            n--;
        }
        return head;
    }
};