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
    void listToArrat(ListNode* head,vector<int>& nums){
             int i = 0;
             while(head != NULL && i<nums.size()){
                nums[i] = head->val;
                head = head->next;
                i++;
             }
    }

    void arrayToList(ListNode* head,vector<int>& nums){
        int i = 0;
        while(head != NULL && i<nums.size()){
                head->val = nums[i];
                head = head->next;
                i++;
             }
    }
    int listLength(ListNode* head){
        if(head == NULL){
            return 0;
        }
        int l = 0;
        while(head != NULL){
            head = head->next;
            l++;
        }
        return l;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int l = listLength(head);
        if(head == NULL){
            return head;
        }
        if(k == 0 || k%l == 0){
            return head;
        }
        
        vector<int> nums(l,0);
        listToArrat(head,nums);
        int n = nums.size();
        k %= n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        ListNode* temp1 = head;
        arrayToList(temp1,nums);
        return head;
    }
};