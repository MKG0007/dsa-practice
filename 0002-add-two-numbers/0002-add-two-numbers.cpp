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
        if(l1 == NULL || l2 == NULL){
            return (l1 != NULL)? l1 : l2; 
        }

        ListNode* newlist = new ListNode(0);
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* ntemp = newlist;

        int carry = 0;
        int sum = 0;
        while(temp1 != nullptr && temp2 != nullptr){
            ListNode* node = new ListNode(0);
            sum = temp1->val + temp2->val+carry;
            node->val = sum%10;
            carry = sum/10;
            ntemp->next = node;
            ntemp = ntemp->next;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        ListNode* temp = NULL;
        if(temp1 != NULL) temp = temp1;
        else if(temp2 != NULL) temp = temp2;

        while(temp != NULL){
            ListNode* node = new ListNode(0);
            sum = temp->val+carry;
            carry = sum/10;
            node->val = sum%10;
            ntemp->next = node;
            ntemp = ntemp->next;
            temp = temp->next;
        }
        if(carry != 0){
            ntemp->next = new ListNode(carry);
        }

        return newlist->next;
    }
};