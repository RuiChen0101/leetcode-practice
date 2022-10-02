#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int minimumTotal(vector<vector<int>>& triangle) {
    int len = triangle.size();
    vector<vector<int>> v(len);
    v[len - 1] = triangle[len - 1];
    for (int i = len - 2; i >= 0; i--) {
        for (int j = 0; j < triangle[i].size(); j++) {
            v[i].push_back(triangle[i][j] + min(v[i + 1][j], v[i + 1][j + 1]));
        }
    }
    return v[0][0];
}

int main() {
    vector<vector<int>> tri = {{-10}};
    cout << minimumTotal(tri) << endl;
    return 0;
}