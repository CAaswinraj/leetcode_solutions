//iterate through str add 32 to a character if it is in uppercase (65 to 91) 
class Solution {
public:
    string toLowerCase(string str) {
        
        for(int i=0;i<str.length();i++)
        {
            if(((int) str[i] > 64) && ((int) str[i] < 92))
                str[i] = (char) (int(str[i])+32);
        }
        return str;       
    }
};