class Solution {
public:
    bool helper(string s, unordered_set<string>& set, int start,vector<int>&dp){
        if(start == s.length()) return true;
        if(dp[start] != -1) return dp[start];
        for(int end=start;end<s.size();end++){
            string str1 = s.substr(start,end-start+1);
            if(set.count(str1)){
                if(helper(s,set,end+1,dp)){
                    return dp[start] = true;
                }
            }
        }
        return dp[start] = false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>set(wordDict.begin(),wordDict.end());
        vector<int>dp(s.size(),-1);
        return helper(s,set,0,dp);
    }
};