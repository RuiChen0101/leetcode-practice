#include <iostream>
#include <string>
#include <vector>

using namespace std;

string convert(string s, int numRows) {
    int pl = numRows == 1 ? 1 : (numRows << 1) - 2;
    vector<int> pattern;
    vector<string> rows;
    for (int i = 0; i < pl; i++) {
        if (i < numRows) {
            pattern.push_back(i);
            rows.push_back("");
        } else {
            pattern.push_back((numRows << 1) - i - 2);
        }
    }
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        int tRow = pattern[i % pl];
        rows[tRow] += c;
    }
    string result = "";
    for (int i = 0; i < numRows; i++) {
        result += rows[i];
    }
    return result;
}

int main() {
    string s = "PAYPALISHIRING";
    cout << convert(s, 3) << endl;
    return 0;
}