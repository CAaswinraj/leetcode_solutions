//encode each word to and add it to an unordered set return size of unordered set
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words)
    {
        vector<string> tran = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> unique;
        
        for(auto word : words)
        {
            string temp  = "";
            for(auto c : word)
            {
                
                temp += tran[int(c-'a')];
            }
            unique.insert(temp);
        }
        
        return unique.size();
    }
};