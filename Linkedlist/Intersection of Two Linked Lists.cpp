class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *curr1=headA;
        ListNode *curr2=headB;
        while(curr1!=curr2){
            curr1=curr1->next;
            curr2=curr2->next;
            if(curr1==curr2)
                return curr1;
            else if(curr1==NULL)
                curr1=headB;
            else if(curr2==NULL)
                curr2=headA;
        }
        return curr1;
    }
};
