//required 
//apply conditions to filter out . and + in the email local name
//store resulting emails in vector string filtered
//store this in an unordered set
// return num of elements in set
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        unordered_set<string> unique;
        string temp;
        int j =0,flag = 0;
        for(int i =0;i<emails.size();i++)
        {
            j=0;
            while(emails[i][j] != '@')
            {
                if(emails[i][j] == '+')
                {
                    while(emails[i][j]!='@')
                        j++;
                    break;
                }   
                if(emails[i][j] != '.')
                    temp+=emails[i][j];
                j++;
                    
            }

            temp.append(emails[i],j,100);
            emails[i].assign(temp);
            temp.clear();
        }
        
        for(auto x : emails)
        {
            unique.insert(x);
        }
        return unique.size();
        
    }
};