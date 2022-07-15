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
