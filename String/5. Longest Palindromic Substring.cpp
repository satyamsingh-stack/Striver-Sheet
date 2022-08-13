//Time Comp: O(N^2)
//Space Comp: O(1)


class Solution {
public:
    string longestPalindrome(string S) {
        int start=0;
        int end=0;
        int low,high;
        int n=S.length();
        for(int i=0;i<n;i++)
        {
            // even length
            low=i;
            high=i+1;
            
            while(low>=0 and high<n and S[low]==S[high])
            {
                if((end-start)<(high-low))
                {
                    start=low;
                    end=high;
                }
                low--;
                high++;
            }
            
            // Odd length
            
            low=i;
            high=i+2;
            while(low>=0 and high<n and S[low]==S[high])
            {
                if((end-start)<(high-low))
                {
                    start=low;
                    end=high;
                }
                low--;
                high++;
            }
        }
        return S.substr(start,end-start+1);
    }
};
