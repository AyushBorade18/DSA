class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        map<char,int> mp;
        int x=26;
        for(char ch='a';ch<='z';ch++){
            mp[ch]=x;
            x--;
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            ans=ans+i*mp[s[i-1]];
        }
        return ans;
    }
};