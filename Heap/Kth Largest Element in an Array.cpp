class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>> minheap;
        for(int i=0;i<k;i++)
            minheap.push(arr[i]);
        for(int i=k;i<arr.size();i++){
            if(minheap.top()<arr[i]){
                minheap.pop();
                minheap.push(arr[i]);
            }
        }
        int ans=minheap.top();
        return ans;
    }
};
