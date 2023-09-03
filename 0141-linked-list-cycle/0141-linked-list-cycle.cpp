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
        ListNode *p, *q;
        if(head==NULL || head->next==NULL)
            return false;
        p=q=head;
        do{
            p=p->next;
            q=q->next;
            if(q!=NULL)
                q=q->next;
        }
        while(p && q && p!=q);
            if(p==q)
                return true;
        else
            return false;
    }
};