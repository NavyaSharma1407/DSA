class Solution {
public:
    int findPermutationDifference(string s, string t) {
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            m.insert({s[i],i});
        }
        int ans = 0;
        for(int i=0;i<t.size();i++){
            auto it= m.find(t[i]);
            ans += abs(i - it->second);
        }
        return ans;
    }
};
