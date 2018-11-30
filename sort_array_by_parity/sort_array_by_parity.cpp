// maintain a indice to the first odd integer swap with first even integer encountered
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) 
    {
        int oddind= -1;
        int temp = -1;
        for(int i=0;i<A.size();i++)
        {
            
            if(A[i]%2 == 1)
            {   
                if (oddind == -1)
                    oddind = i;
            }
            else
                if(oddind != -1)
                {
                    //swap with indice odd ind
                    //increment odd ind
                    temp = A[oddind];
                    A[oddind] = A[i];
                    A[i] = temp;
                    oddind+=1;
                }
        }
        return A;
    }
};