int countsmallerthanmid(vector<int> &A,int mid){
    int low=0;
    int high=A.size()-1;
    while(low<=high){
        int mmid=(low+high)>>1;
        if(A[mmid]<=mid)
            low=mmid+1;
        else
            high=mmid-1;
    }
    return low;
}
int Solution::findMedian(vector<vector<int> > &A) {
    int low=1;
    int high=1e9;
    
    while(low<=high){
        int mid=(low+high)>>1;
        int count=0;
        for(int i=0;i<A.size();i++){
            count+=countsmallerthanmid(A[i],mid);
        }
        if(count<=(A.size()*A[0].size()/2))
            low=mid+1;
        else
            high=mid-1;
    }
    return low;
}
