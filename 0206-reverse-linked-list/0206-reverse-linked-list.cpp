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
    ListNode* reversell(ListNode* head){
        if(head == nullptr || head->next == nullptr) return head;

        ListNode* newhead = reversell(head->next);
        ListNode* node = head->next;
        node->next = head;
        head->next = nullptr;
        return newhead;
    }
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;

       return  reversell(head);
        
    }
};