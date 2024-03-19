https://leetcode.com/problems/linked-list-cycle/

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
        struct ListNode* p=head;
        struct ListNode* q=head;
        if(head==NULL)
        {
            return false;
        }
       do{
        p=p->next;
        q=q->next;
        if(q!=NULL){
            q=q->next;
        }else{
            q=NULL;
        }
        }while(p&&q&&p!=q);
        if(p==q && q)
        {
            return true;
        }
        else{
            return false;
        }

       }
    
};
