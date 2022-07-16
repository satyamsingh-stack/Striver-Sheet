class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<char> st;
        for(ListNode *temp=head;temp!=NULL;temp=temp->next)
            st.push(temp->val);
        ListNode *curr=head;
        for(ListNode *curr=head;curr!=NULL;curr=curr->next){
            if(st.top()!=curr->val)
                return false;
            st.pop();
        }
        return true;
    }
};
