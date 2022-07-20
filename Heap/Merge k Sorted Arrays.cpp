class Solution
{
    public:
    //Function to merge k sorted arrays.
    struct data{
        int val;
        int apos;
        int vpos;
        data(int x,int y,int z){
            val=x;
            apos=y;
            vpos=z;
        }
    };
    struct mycmp{
        bool operator()(data &d1,data&d2){
            return d1.val>d2.val;
        }
    };
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        vector<int> ans;
        priority_queue<data,vector<data>,mycmp> minheap;
        for(int i=0;i<K;i++){
            data d(arr[i][0],i,0);
            minheap.push(d);
        }
        while(minheap.empty()==false){
            data curr=minheap.top();
            minheap.pop();
            ans.push_back(curr.val);
            int ap=curr.apos, vp=curr.vpos;
            if(vp+1<arr[ap].size()){
                data d(arr[ap][vp+1],ap,vp+1);
                minheap.push(d);
            }
        }
        return ans;
    }
};
