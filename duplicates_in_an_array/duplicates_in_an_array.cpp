//add n num of elements to the vector at pos i if you encounter i in vector
// so any element>2 is in the solution

//multiply by -1 if you see it once and return if it is positive as we know no element apperas more than twice
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
        vector<int> ret;
        int l = nums.size();
        for(int i = 0;i<l;i++)
        {
            int k = abs(nums[i]) - 1;
            nums[k] *= -1;
            if(nums[k]>=0)
                ret.push_back(k+1);
        }
        /*
        for(int i = 0;i<l ;i++)
        {
            int k = nums[i]%l;
            if(!k)
                k=l;
            nums[k - 1] += l;
         
        }
        for(int i = 0;i<l;i++)
        {
            //cout<<nums[i]<<"\n";
            if(nums[i]>2*l)
                ret.push_back(i+1);
        }
        */
        
        return ret;
        
        
    }
};