/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
        Node* n = new Node(head->val);
        Node* new_begin =n ; 
        Node* old_begin = head; 
        unordered_map<Node*, Node*>m; 
        m[head]=n; 
        head = head->next; 
        while(head){
            n -> next = new Node(head->val); 
            n = n->next;
            m[head]=n;
            head = head->next;
        }
        head = old_begin;
        n = new_begin; 
        while(head){
            n->random = m[head->random];
            n= n->next;
            head = head->next;
        }

        return new_begin; 
    }
};
