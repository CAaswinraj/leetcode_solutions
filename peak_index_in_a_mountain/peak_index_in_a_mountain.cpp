class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) 
    {
        int i = 1;
        for(;i<A.size() - 1;i++)
        {
           if(A[i+1] - A[i]<0)
                return i;
        }    
    }
};