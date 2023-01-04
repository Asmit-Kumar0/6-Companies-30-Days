// https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/description/

class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& v)
    {
        int x=v[0];
        
        for(int i=1; i<v.size(); i++)
        {
            x= __gcd(x,v[i]);
        }

        sort(nums.begin(),nums.end());
        int cnt=0;

        for(int i=0; i<nums.size(); i++)
        {
            if(x%nums[i]==0) break;
            cnt++;
        }
        
        if(cnt==nums.size()) return -1;
        return cnt;
    }
};
