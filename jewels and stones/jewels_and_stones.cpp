//brute force check whether each element in S is in J
//O(SJ)
//hash elements in J
// check if elements in S match them
//O(S + J)
class Solution 
{

    public:
    
    int numJewelsInStones(string J, string S)
    {
        int out = 0;
        unordered_map<char, int> map;
        for(int i=0;i<J.length();i++)
            map.insert(make_pair(J[i],i));
        for(int i=0;i<S.length();i++)
        {
            if(map.find(S[i]) != map.end())
                out++;        
        }
         return out;
    }
};