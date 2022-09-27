#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int islandFinding(vector<vector<int>>& grid, int m, int n, int i, int j) {
    if (i < 0 || i >= m || j < 0 || j >= n) return 0;
    if (grid[i][j] != 1) return 0;
    grid[i][j] = 2;
    int r1 = islandFinding(grid, m, n, i + 1, j);
    int r2 = islandFinding(grid, m, n, i - 1, j);
    int r3 = islandFinding(grid, m, n, i, j + 1);
    int r4 = islandFinding(grid, m, n, i, j - 1);
    return 1 + r1 + r2 + r3 + r4;
}

int maxAreaOfIsland(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int maxSize = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] != 1) continue;
            maxSize = max(maxSize, islandFinding(grid, m, n, i, j));
        }
    }
    return maxSize;
}

int main() { return 0; }