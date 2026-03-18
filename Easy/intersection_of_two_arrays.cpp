class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s(nums1.begin(),nums1.end());
        unordered_set<int>r;
        for(auto it:nums2){
            if(s.count(it)){
                r.insert(it);
            }
        }
        return vector<int>(r.begin(),r.end());
    }
};
