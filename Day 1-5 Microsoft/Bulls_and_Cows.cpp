// https://leetcode.com/problems/bulls-and-cows/description/

class Solution {
public:
    string getHint(string secret, string guess)
    {
        int b=0,c=0;
        multiset<char> s,g;

        for(int i=0; i<secret.length(); i++)
        {
            if(secret[i]==guess[i]) b++;
            else
            {
                s.insert(secret[i]);
                g.insert(guess[i]);
            }
        }    

        for(auto &it:g)
        {
            auto it1= s.find(it);
            if(it1!=s.end())
            {
                c++;
                s.erase(it1);
            }
        }

        string strb,ans,strc;
        strb = to_string(b);
        ans+=strb;
        ans.push_back('A');
        strc = to_string(c);
        ans+=strc;
        ans.push_back('B');
        return ans;
    }
};
