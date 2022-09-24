#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string reverseWords(string s) {
    int i = 0;
    for (int j = 0; j < s.length(); j++) {
        if (s[j] == ' ') {
            reverse(s.begin() + i, s.begin() + j);
            i = j + 1;
        }
    }
    reverse(s.begin() + i, s.end());
    return s;
}

int main() {
    cout << reverseWords("Let's take LeetCode contest") << endl;
    return 0;
}