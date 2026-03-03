class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>arr;
        for(int val : nums){
            arr.push_back(to_string(val));
        }
        sort(arr.begin() , arr.end() , [](string &a, string &b){
            return a+b > b+a;
        });
        if(arr[0] == "0"){
            return "0";
        }
        string ans = "";
        for(string &val : arr){
            ans += val;
        }
        return ans;
    }
};
