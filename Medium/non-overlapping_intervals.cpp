class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end(),[](vector<int>&a,vector<int>&b){
            return a[1] < b[1];
        });
        if(n==1) return 0;
        int ans = 0;
        int j=0;
        for(int i=1;i<n;i++){
            if(intervals[i][0] >= intervals[j][1]){
                j = i;
            }else{
                ans++;
            }
        }
        return ans;
    }
};
