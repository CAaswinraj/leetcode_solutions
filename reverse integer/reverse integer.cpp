class Solution {
public:
    int reverse(int x) {
        // sum sign current bit
        int c,sign = 1,k;
        long int sum = 0;
        k=(x>0)? x :-x;
        sign = (x>0)? 1: -1;
        
        while(k>0)
        {
            sum= sum*10;
            c = k%10;
            sum+=c;
            k = k/10;
        }
        if (sum>INT_MAX)
            return 0;
        
        return sum*sign;
    }
};