class Solution {
public:
    int m, n;

    void dfs(vector<vector<char>>& grid, int i, int j) {
        
        // Out of bounds OR water OR already visited
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] != '1') {
            return;
        }

        // Mark visited
        grid[i][j] = 'm';

        // Explore 4 directions
        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
    }

    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();

        int island = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] == '1') {
                    dfs(grid, i, j);
                    island++;
                }
            }
        }

        return island;
    }
};