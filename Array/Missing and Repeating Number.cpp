//Time Comp: O(N)
//Space Comp: O(1)

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> ans;
    long long int n=A.size();
    long long int missing =0, repeating =0;
    long long int s=n*(n+1)/2;
    long long int p=n*(2*n+1)*(n+1)/6;
    for(int i=0;i<n;i++){
        s=s-(long long int) A[i];
        p=p-(long long int )A[i] * (long long int) A[i];
    }
    missing=(s+p/s)/2;
    repeating=missing -s;
    ans.push_back(repeating);
    ans.push_back(missing);
    return ans;
}
