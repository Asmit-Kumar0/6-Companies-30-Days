// https://leetcode.com/problems/combination-sum-iii/description/

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
    vector<vector<int>>vv;
    
    void ff(int n, int k, vi v, int sum, vi arr, int i)
    {
        if(v.size() > k || sum>n)
        {
            return;
        }

        if(i>=arr.size())
        {
            if(v.size()==k && sum==n)
            {
                vv.pb(v);
            }
            return;
        }

        v.pb(arr[i]);
        ff(n, k, v, sum+arr[i], arr, i+1);
        v.pob;
        ff(n, k, v, sum, arr, i+1);
    }

    vector<vector<int>> combinationSum3(int k, int n)
    {
        vi v;
        vi arr = {1,2,3,4,5,6,7,8,9};
        ff(n,k,v,0,arr,0);    
        return vv;
    }
};
