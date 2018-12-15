//brute force O(2N)
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A)
    {
        for(int j=0;j<A.size();j++)
        {
            reverse(A[j].begin(),A[j].end());
            for(int i=0;i<A[j].size();i++)
            {
                if (A[j].at(i) == 0)
                    A[j].at(i) = 1;
                else
                    A[j].at(i) = 0;
            }
            
        }
        
        return A;
    }
};