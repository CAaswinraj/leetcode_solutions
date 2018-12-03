//brute force accept a (n+1)! permutation that satisfies the condition
//if we encounter an i add the smallest element else the largest element O(N)

class Solution {
public:
    vector<int> diStringMatch(string S) 
    {
        vector<int> ret;
        int front=0,back;
        back = S.length();
        for(auto c : S)
        {
            if(c == 'I')
                ret.push_back(front++);
            else
                ret.push_back(back--);
        }
        ret.push_back(back);
        return ret;
        
    }
};