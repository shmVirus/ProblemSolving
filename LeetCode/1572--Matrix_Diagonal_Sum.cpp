class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0; int n = mat.size(); int a=0,b=n-1;
        for (int i=0; i<n; ++i) {
            sum += mat[i][a++] + mat[i][b--];
        }
        return sum -= n%2? mat[n/2][n/2] : 0;
    }
};
