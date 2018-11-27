
// hash map O(N)
// same as two pass but steps 1 and 2 are done simultaneously
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        
        // return variable
        vector<int> vect;
            
        // hash map to map target - nums[i] to i 
        std::unordered_map<int, int> dict;
            
        
        for(int i=0;i<nums.size();i++)
        {
            dict.insert({target - nums.at(i),i});
            auto search = dict.find(nums.at(i));
            if (search != dict.end()) 
            {
                // to ensure the indices are in ascending order
                if(search->second != i)
                {
                    if(search->second > i)
                    {
                        // result found
                        vect.push_back(i);
                        vect.push_back(search -> second);
                    }
                    else
                    {
                        vect.push_back(search -> second);
                        vect.push_back(i);
                    }    
                    return vect;
                }
            }
            
        }
        
    }
        
};
