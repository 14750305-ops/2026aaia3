/// week08-3.cpp Á³±Û¯x°}¿é¥X
/// Leetcode
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int M = matrix.size(), N = matrix[0].size();
        int left = 0, right = N - 1, up = 0, down = M - 1;
        while (ans.size()<M*N) {
            /// right=================================================
            int i = up;
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[i][j]);
            }
            if(++up>down) break;

            /// down===================================================
            int j = right;
            for (int i = up; i <= down; i++) {
                ans.push_back(matrix[i][j]);
            }
            if(--right<left) break;

            /// left===================================================
            i = down;
            for (int j = right; j >= left; j--) {
                ans.push_back(matrix[i][j]);
            }
            if(--down<up) break;

            /// up=====================================================
            j = left;
            for (int i = down; i >= up; i--) {
                ans.push_back(matrix[i][j]);
            }
            if(++left>right) break;
        }
        return ans;
    }
};
