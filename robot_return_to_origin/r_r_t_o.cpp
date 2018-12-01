class Solution {
public:
    bool judgeCircle(string moves) {
        int v=0,h=0;
        for(auto x : moves)
        {
            if (x == 'R')
                h += 1;
            else if (x == 'L')
                h -= 1;
            else if (x == 'U')
                v += 1;
            else
                v -= 1;
        }
        
        if(v == h && h== 0)
            return true;
        else
            return false;
        
    }
};