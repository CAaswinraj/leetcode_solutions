//go through each column of characters if any of them are in decreasing order they are in deletions list
class Solution {
public:
    int minDeletionSize(vector<string>& A) 
    {
        int d=0;
        for(int i=0;i<A[0].length();i++)
        {
            for(int j=0;j<A.size() - 1;j++)
            {
                if((int)(A[j][i] - A[j+1][i])>0)
                {
                    d+=1;
                    break;
                }
            }
        }
        return d;
        
    }
};