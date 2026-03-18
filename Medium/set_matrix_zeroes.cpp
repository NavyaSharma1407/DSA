class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<pair<int,int>>v;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == 0){
                    v.push_back({i,j});
                }
            }
        }
        for(auto p : v){
            for(int i=0;i<m;i++){
                matrix[i][p.second]=0;
            }
            for(int j=0;j<n;j++){
                matrix[p.first][j]=0;
            }
        }
    }
};
