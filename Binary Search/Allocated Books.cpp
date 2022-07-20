bool isValid(vector<int> &A,int mid,int B){
    int count=0;
    int SumAllocated=0;
    for(int i=0;i<A.size();i++){
        if(SumAllocated+A[i]>mid){
            count++;
            SumAllocated=A[i];
            if(SumAllocated>mid)
                return false;
        }
        else    
            SumAllocated+=A[i];
    }
    if(count<B)
        return true;
    else
        return false;
}
int Solution::books(vector<int> &A, int B) {
    if(B>A.size())  return -1;
    int low=A[0],high=0;
    for(int i=0;i<A.size();i++){
        high+=A[i];
        low=min(low,A[i]);
    }
    while(low<=high){
        int mid=(low+high)>>1;
        if(isValid(A,mid,B)){
            high=mid-1;
        }
        else
            low=mid+1;
            
    }
    return low;
}
