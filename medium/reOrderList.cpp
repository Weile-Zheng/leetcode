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
    void reorderList(ListNode* head) {
        ListNode* start = head;
        vector<ListNode*> v; 
        while(start){
            v.push_back(start);
            start = start->next; 
        }

        for(int i=0; i<v.size()/2; i++){
            v[i]->next=v[v.size()-1-i];
            v[v.size()-1-i]->next = v[i+1];
        }
        v[v.size()/2]->next = nullptr; 
    }
};
