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
    ListNode* deleteMiddle(ListNode* head) {
        int count = 0 ;
        auto t = head;
        while(t){
            t = t->next;
            count++;
        }

        t=head;
        int f=count/2;;

        while(f>1)
        {
           t=t->next;
           f--;
        }
        if(f==0){return head->next;}

        if(t->next)
        {
            t->next=t->next->next;
        }else{
            t->next=nullptr;
        }

        return head;
        
    }
};