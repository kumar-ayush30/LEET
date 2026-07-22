class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows=grid.size();
        int cols=grid[0].size();
        vector<vector<int>> ans(rows,vector<int>(cols));
        int total = rows * cols;
        for (int row =0;row<rows;row++){
            for (int col=0;col<cols;col++){
                int index = row * cols +col;
                int newIndex=(index+k)%total;
                int newRow = newIndex/cols;
                int newCol=newIndex%cols;

                ans[newRow][newCol]=grid[row][col];
                
            }
        }
            return ans;
    }
};