class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector <int> ret;
        int temp,rem,num,flag =0;
        for(int i=left;i<=right;i++)
        {
            num =i;
            temp = i;
            while(temp>0)
            {
                rem = temp%10;
                if(rem==0)
                {
                    flag = 1;
                    break;
                }    
                if(num%rem !=0)
                {
                    flag = 1;
                    break;
                }    
                temp = temp/10;
            }
            if(flag == 0)
            {
                ret.push_back(i);
            }
            flag =0;    
        }
        return ret;
        
    }
};
