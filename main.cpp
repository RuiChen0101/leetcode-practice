#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int>& nums, int k) {
    int len = nums.size();
    k = k % len;
    auto start = nums.begin();
    auto mid = start + (len - k);
    auto end = nums.end();

    vector<int> result(len);

    copy(mid, end, result.begin());
    copy(start, mid, result.begin() + k);
    nums = result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    rotate(nums, 11);
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}