#include <iostream>
#include <regex>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string refStr = strs[0];
    string result = "";
    if (refStr == "") return "";
    for (int i = 0; i < refStr.length(); i++) {
        string prefix = refStr.substr(0, i + 1);
        regex reg("^" + prefix + "\\w*");
        for (int j = 1; j < strs.size(); j++) {
            if (!regex_match(strs[j], reg)) return result;
        }
        result = prefix;
    }
    return result;
}

int main() {
    vector<string> strs = {"ab", "a"};
    cout << longestCommonPrefix(strs) << endl;
    return 0;
}