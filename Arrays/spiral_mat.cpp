class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = matrix.size();    // Number of rows
        int c = matrix[0].size(); // Number of columns
        int top = 0;
        int bottom = r - 1;
        int left = 0;
        int right = c - 1;
        vector<int> ans;

        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;

            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;
            // Check if there are still rows to traverse
            if (top <= bottom) {
                // Traverse from right to left
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--; // Move up to the previous row
            }

            // Check if there are still columns to traverse
            if (left <= right) {
                // Traverse from bottom to top
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++; // Move right to the next column
            }
        }
        return ans;
    }
};