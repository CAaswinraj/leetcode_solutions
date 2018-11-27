// brute force O(n^2)
// compute sum of all possible pairs and check if any are equal to target and return their indices if equal


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vect;
        for(int i=0;i<nums.size();i++)
        {
            for(int j= i+1;j<nums.size();j++)
            {
                int sum = nums.at(i) + nums.at(j);
                if (sum == target)
                {
                    vect.push_back(i);
                    vect.push_back(j);
                    return vect ;
                }
            }
        }
        return vect;
    }
};


