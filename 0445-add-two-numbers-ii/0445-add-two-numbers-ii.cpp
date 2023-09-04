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
    
    ListNode* reverse(ListNode *head)
    {
        if(!head || !head->next)
            return head;
        
        ListNode *p=head, *q=NULL, *r=NULL;
        
        while(p)
        {
            r=q;
            q=p;
           
             p=p->next;
             q->next=r;
        }
        head=q;
       return head;
    }
    
    
     ListNode* addTwoNumbers1(ListNode* l1, ListNode* l2) {
       ListNode* ptr= new ListNode();
       ListNode* temp =ptr;
       int c=0;
      
       while(l1 ||l2 ||c)
       {
            int sum=0;
         if(l1 != NULL)
         {
             sum += l1->val;
             l1=l1->next;
         } 
         if(l2!=NULL)
         {
             sum += l2->val;
             l2=l2->next;
         }
         sum= sum+c;
         c= sum/10;
         ListNode* ans= new ListNode(sum%10);
         temp->next= ans;
         temp=temp->next;
    }
    return ptr->next;
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* r1 = reverse(l1);
        ListNode* r2 = reverse(l2);
        ListNode *ans = addTwoNumbers1(r1, r2);
        
        return reverse(ans);
        
        
    }
};