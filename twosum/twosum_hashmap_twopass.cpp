// with hash map O(2N)
// create a reverse hash map for target - element (complement) for each element pointing to the index in first pass
// for the second pass, check if element exists in above hash map, if yes return current element's index and its complement's index

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        
        // return variable
        vector<int> vect;
            
        // hash map to map target - nums[i] to i 
        std::unordered_map<int, int> dict;
        
        for (int k=0;k<nums.size();k++)
            dict.insert({target - nums.at(k),k});
        
        for(int i=0;i<nums.size();i++)
        {
            auto search = dict.find(nums.at(i));
            if (search != dict.end()) 
            {
                if(search->second != i)
                {
                    // result found
                    vect.push_back(i);
                    vect.push_back(search -> second);
                    
                    return vect;
                }
            }
            
        }
            
    }
        
};
