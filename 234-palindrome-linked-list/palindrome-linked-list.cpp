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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        vector<int> num;
        while(temp != NULL){
            num.push_back(temp->val);
            temp = temp->next;
        }
        int n=num.size()-1;
        int i=0;
        if(n == 0){
            return true;
        }
        while(i<n){
            if(num[i] == num[n]){
                i++;
                n--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};