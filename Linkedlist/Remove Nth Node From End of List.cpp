class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode *curr=head;
        while(curr!=NULL){
            size++;
            curr=curr->next;
        }
        curr=head;
        if(n==size)
            return head->next;
        for(int i=1;i<size-n+1;i++){
            curr=curr->next;
        }
        ListNode *temp=curr;
        curr=head;
        while(curr!=NULL){
            if(curr->next==temp)
                curr->next=temp->next;
            curr=curr->next;
        }
        return head;
    }
};



// IN ONE Pass

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
            return NULL;
        ListNode *slow=head;
        ListNode *fast=head;
        int c=0;
        while(fast!=NULL){
            fast=fast->next;
            if(c>n)
                slow=slow->next;
            c++;
        }
        if(c==n)
            head=slow->next;
        else if(slow!=NULL && slow->next!=NULL)
            slow->next=slow->next->next;
        return head;
    }
};
