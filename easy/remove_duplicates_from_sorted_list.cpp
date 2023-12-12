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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return nullptr; 
        if(!head->next)return head; 
        ListNode* start = head; 
        ListNode *temp = head; 
        int curr = head->val; 
        head = head->next; 
        while(head){
            if(head->val == curr){
                if(!head->next){
                    temp->next = nullptr;
                    break; 
                }
                head = head->next;
            }
            else{
                temp -> next = head; 
                curr = head->val; 
                temp = head; 
                head = head->next;
            }
        }
        return start ;
    }
};
