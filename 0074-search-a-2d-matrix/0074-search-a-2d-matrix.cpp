class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        const int rows = matrix.size();
        const int cols = matrix[0].size();

        int low = 0;
        int high = (rows * cols) - 1;

        while(low <= high){
            const int mid = low + (high - low) / 2;

            int row = mid / cols;
            int col = mid % cols;
            
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] < target) low = mid + 1;
            else high = mid - 1;
        }

        return false;
    }
};