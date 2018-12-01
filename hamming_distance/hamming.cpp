//brute force logn time divide by powers and equate remainders
class Solution {
public:
    int hammingDistance(int x, int y) {
        long int x1=0,x2=0,y1=0,y2=0,p=2,count =0,q=4;
        if(x%2 != y%2)
        {
           count++;
        }
        cout<<count<<"\n";
        x1 = x%2;
        x2 = x%4;
        y1 = y%2;
        y2 = y%4;
        while(x>q/4 || y>q/4)
        {
            if((x2 -x1) != (y2 -y1))
                count++;
            x1 =x2;
            y1 = y2;
            q = q*2;          
            x2 = x%q;
            y2 = y%q;
        }
        return count;
    }
};