class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0; i < k; i++){
            int temp = grid[m-1][n-1];
            for(int j = m-1; j >= 0; j--){
                for(int k = n-1; k > 0; k--){
                    grid[j][k] = grid[j][k-1];
                }
                if(j > 0) grid[j][0] = grid[j-1][n-1];
            }
            grid[0][0] = temp;
        } 
        return grid;
    }
};