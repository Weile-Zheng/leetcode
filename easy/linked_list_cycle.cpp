/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return false; 
        set<ListNode*> myset; 
        myset.insert(head); 
        while(head->next){
            head = head->next;
            if(myset.find(head) != myset.end())return true;
            myset.insert(head);
        }
        return false; 
    }
};

// Submission: https://leetcode.com/problems/linked-list-cycle/solutions/3999246/video-solution-explanation-with-drawings-in-depth-java-c/
