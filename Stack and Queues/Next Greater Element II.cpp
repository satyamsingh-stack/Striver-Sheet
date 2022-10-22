//Time Comp: O(n)
//Space Comp: O(n)

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n=nums.size();
        vector<int> nger(n,-1);
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n])
                st.pop();
            if(i<n){
                if(!st.empty())
                    nger[i]=st.top();
            }
            st.push(nums[i%n]);
        }
        return nger;
    }
};
