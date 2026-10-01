class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        if(grid.empty() || grid[0].empty()) return 0;
 
        int rows = grid.size();
        int cols = grid[0].size();

        int row = 0;
        int col = cols - 1;
        int negNum = 0;

        while(row < rows && col >= 0){
            if(grid[row][col] < 0){
                negNum += rows - row ;
                --col;
            }else{
                row++;
            }
        }

        return negNum;
    }
};