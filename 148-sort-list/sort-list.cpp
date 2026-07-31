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
    ListNode* midle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* marge(ListNode* l1,ListNode* l2){
        ListNode dummy(0);
        ListNode* tail = &dummy;
        while(l1 != NULL && l2 != NULL){
            if(l1->val <= l2->val){
               tail->next = l1;
               l1 = l1->next;
            }
            else{
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }
        if(l1 != NULL){
            tail->next = l1;
        }
        if(l2 != NULL){
            tail->next = l2;
        }
        return dummy.next;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* mid = midle(head);
        ListNode* rightHead = mid->next;
        mid->next = NULL;

        ListNode* left = sortList(head);
        ListNode* right = sortList(rightHead);

        return marge(left,right);
    }
};

/*
->converting link list into array 
this method is not work on large link list     
class Solution {
public:
    int listLength(ListNode* head){
        if(head == NULL){
            return 0;
        }
        int l=0;
        while(head != NULL){
            head = head->next;
            l++;
        }
        return l;
    }
    void listToArray(ListNode* head,vector<int>& nums){
        int i=0;
        while(i<nums.size() && head != NULL){
            nums[i] = head->val;
            head = head->next;
            i++;
        }
    }

    void bubbleSort(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size()-i-1;j++){
                if(nums[j]>nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
    }

    void arrayToList(vector<int>& nums,ListNode* head){
        int i=0;
        while(i<nums.size() && head != NULL){
            head->val = nums[i];
            i++;
            head = head->next;
        }
    }
    ListNode* sortList(ListNode* head) {
        int l = listLength(head);
        vector<int> nums(l,0);
        ListNode* temp=head;
        listToArray(temp,nums);
        bubbleSort(nums);
        ListNode* temp1=head;
        arrayToList(nums,temp1);
        return head;
    }
};
*/
