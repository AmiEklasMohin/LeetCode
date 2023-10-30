/*https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int idx = haystack.find(needle);
        return idx;
    }
};

int main() {
    string haystack, needle;
    cin >> haystack >> needle;
    Solution ans;
    int idx = ans.strStr(haystack, needle);
    cout << idx << endl;
    return 0;
}
