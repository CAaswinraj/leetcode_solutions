//check is num%2
//ensure even is in correct configuration
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A)
    {
        int j =1,i=0;
        
        int n = A.size();
        for(;i<n;)
        {
            if(A[i]%2 == 0)
            {
                i +=2;
            }
            else
                while(j<n)
                {
                    if(A[j]%2 == 0)
                    {
                        swap(A[i],A[j]);
                        i+=2;
                        j+=2;
                        break;
                    }
                    else
                        j+=2;
                }
        }
        
        return A;
        
    }
};
