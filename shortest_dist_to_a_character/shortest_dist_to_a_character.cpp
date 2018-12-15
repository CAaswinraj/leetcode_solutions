
class Solution {
public:
    vector<int> shortestToChar(string S, char C) 
    {
        int pos = -1;
        int l = S.length();
        vector<int> dis(l,INT_MAX );
        int temp;
        for(int i =0;i<l;i++)
        {
            if(S[i] == C)
            {
                dis[i] = 0;
                if (pos == -1)
                    pos = i;
            }
            
        }
        if(pos == -1)
            return dis;
        dis[0] = pos;
        for(int j=1;j<l ;j++)
        {
            dis[j] = min(dis[j-1] + 1,dis[j]);
        }
      
        for(int j = l-2;j>0;j--)
        {
        
            dis[j] =  min(dis[j+1]+1,dis[j]);
        }
        return dis;
        
    }
};