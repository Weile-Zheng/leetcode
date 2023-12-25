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
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val == val){
            ListNode *temp = head; 
            head = head->next;
            delete(temp);
            }
        if(!head) return nullptr; 

        ListNode* start = head; // Start val does not equal to val. 

        while(start){
            ListNode * n = start->next; 
            while(n && n->val == val){
                ListNode *temp = n; 
                n = n->next;
                delete(temp);
            }; 
            start->next = n;
            start = start->next;
        }
        return head; 
    }
};
