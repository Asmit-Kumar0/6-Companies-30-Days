// https://leetcode.com/problems/evaluate-reverse-polish-notation/

#define pb push_back
#define pf push_front
#define pob pop_back()
#define pof pop_front()
#define ll long long
#define ull unsigned long int
#define vi vector<int>
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define FOR(x,n) for(int i=x; i<n; i++)

class Solution {
public:
    int evalRPN(vector<string>&str)
    {
        vi v;
        FOR(0,str.size())
        {
            if(str[i]=="+" || str[i]=="-" || str[i]=="*" || str[i]=="/")
            {
                int sum;
                if(str[i]=="+")
                {
                    sum = v[v.size()-2] + v[v.size()-1];
                }
                else if(str[i]=="-")
                {
                    sum = v[v.size()-2] - v[v.size()-1];
                }
                else if(str[i]=="*")
                {
                    sum = v[v.size()-2] * v[v.size()-1];
                }
                else if(str[i]=="/")
                {
                    sum = v[v.size()-2] / v[v.size()-1];
                }
                v.pob;
                v.pob;
                v.pb(sum);
            }
            else
            {
                stringstream geek(str[i]);
                int x = 0;
                geek >> x;
                v.pb(x);
            }
        }
        return v[0];
    }
};
