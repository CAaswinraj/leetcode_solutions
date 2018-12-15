class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A)
    {
        vector<int> dif;
        int l = A.size();
        int ans = 0;
        int n = 2;
        if(l>2)
        {
            for(int i = 0;i<l-1;i++)
            {
                dif.push_back(A[i+1] - A[i]);
            }
            
            for(int i =0;i<dif.size() - 1;i++)
            {
                if(dif[i] == dif[i+1])
                    n++;
                else
                    if(n>2)
                    {
                        ans+= (pow(n,2) - 3*n + 2)/2;
                        n = 2;
                    }
                    
            }
            if(n>2)
            {
                ans+= (pow(n,2) - 3*n + 2)/2;
                n = 2;
            }
        }
        return ans;
    }
};aaa