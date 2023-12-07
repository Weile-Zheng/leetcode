
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Not required but does achieve a must higher runtime percentile. 
        if(list1 == nullptr )return list2;
        if(list2 == nullptr )return list1; 
        
        ListNode* front= new ListNode(); //First node at front -> next
        ListNode* follow = front; 
        while(list1!= nullptr && list2!= nullptr){
            if(list1->val <= list2->val){
                follow->next = list1;
                follow=follow->next;
                list1 = list1->next;
            }
            else{
                follow->next = list2;
                follow=follow->next;
                list2=list2->next;
            }
        }
        if(list1==nullptr && list2) follow-> next=list2;
        else if(list2 ==nullptr && list1) follow->next =list1;

        return front->next; 
    }
};


// ---------------Recursive Version-------------------

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Check the head node. If equal, we have list1 head, else, the smaller
        if(list1 == nullptr )return list2;
        if(list2 == nullptr )return list1;

        ListNode* front = new ListNode();
        if(list1->val<= list2->val){
            front=list1;
            front->next = mergeTwoLists(list1->next, list2);
        }
        else{
            front= list2;
            front->next= mergeTwoLists(list1, list2->next);
        }
        return front;
    }

};
// Submission: https://leetcode.com/problems/merge-two-sorted-lists/
