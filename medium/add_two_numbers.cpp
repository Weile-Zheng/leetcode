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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *node = new ListNode{};
        ListNode *start = node;
        int x = 0;
        bool l1end = false;
        bool l2end = false;
        while (l1end == false || l2end == false)
        {
            int total = x;
            if (l1end == false)
            {
                total += l1->val;
            }
            if (l2end == false)
            {
                total += l2->val;
            }

            if (total >= 10)
            {
                node->val = total - 10;
                x = 1;
            }
            else
            {
                node->val = total;
                x = 0;
            }

            if (l1->next == nullptr)
            {
                l1end = true;
            }
            else
            {
                l1 = l1->next;
            }

            if (l2->next == nullptr)
            {
                l2end = true;
            }
            else
            {
                l2 = l2->next;
            }

            if (l1end == false || l2end == false)
            {
                node->next = new ListNode{};
                node = node->next;
            }
        }
        if (x == 1)
        {
            node->next = new ListNode{1};
        }
        return start;
    }
};

// Submission: https://leetcode.com/submissions/detail/1049795883/