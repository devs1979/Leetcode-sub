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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>v(k,nullptr);
        ListNode* curr = head , *prev = nullptr;

        int cnt = 0;
        while(curr!= NULL){
            cnt++;
            curr = curr->next;
        }

        curr = head;
        int x = cnt/k , y = cnt % k;

        for(int i=0 ; curr && i < k ; i++,y--){
            v[i] = curr;
            for(int j=0;  j < x + (y>0) ; j++){
                prev = curr;
                curr = curr->next;
            }
            prev->next = nullptr;
        }
        return v;
    }
};