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
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        /**
        1st Condition. Valid, succcessfully delete it
        2nd Condition 1st node . Return node->next ;
        3nd Condition last node. Set second to last to nullptr
        */

        vector<ListNode *> vec;
        ListNode *it = head;
        while (it->next != nullptr)
        {
            vec.push_back(it);
            it = it->next;
        }
        vec.push_back(it);
        if (n == vec.size())
            return head->next;
        if (n == 1)
            vec[vec.size() - 2]->next = nullptr;
        else
            vec[vec.size() - n - 1]->next = vec[vec.size() - n + 1];
        return head;
    }
};

// Submission: https://leetcode.com/submissions/detail/1091427339/