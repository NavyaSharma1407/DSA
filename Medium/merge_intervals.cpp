class Solution {
public:
    static bool compare(vector<int>&a, vector<int>&b){
        return a[0]<b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end(),compare);
        vector<int>curr = intervals[0];
        for(int i=1;i<intervals.size();i++){
            if(curr[1] >= intervals[i][0]){
                curr[1] = max(curr[1],intervals[i][1]);
            }else{
                ans.push_back(curr);
                curr = intervals[i];
            }
        }
        ans.push_back(curr);
        return ans;
    }
};