/*https://leetcode.com/problems/longest-common-prefix/*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longest_string = "";
        string temp, str = strs[0];
        for (int i = 0; i < str.length(); ++i) {
            for (int j = 0; j < strs.size(); ++j) {
                temp = strs[j];
                if (i > temp.length() || str[i] != temp[i]) {
                    return longest_string;
                }
            }
            longest_string += str[i];
        }
        return longest_string;
    }
};

int main() {
    vector<string> strs;
    string longest_string, str;
    int num_of_string;
    cin >> num_of_string;
    for (int i = 1; i <= num_of_string; ++i) {
        cin >> str;
        strs.push_back(str);
    }
    Solution ans;
    longest_string = ans.longestCommonPrefix(strs);
    cout << longest_string << endl;
    return 0;
} 
