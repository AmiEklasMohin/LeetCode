/*https://leetcode.com/problems/find-the-difference/*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr[26];
        char ch;
        memset(arr, 0, sizeof(arr));
        for (int i{0}; i < s.length(); ++i) {
            int x = s[i] - 97;
            arr[x] += 1;
        }
        for (int i{0}; i < t.length(); ++i) {
            int x = t[i] - 97;
            arr[x] -= 1;
        }
        for (int i{0}; i < 26; ++i) {
            if (arr[i] != 0) {
                ch = char(i + 97);
                break;
            }
        }
        return ch;
    }
};

int main() {
    string s{}, t{};
    cin >> s >> t;
    Solution ans;
    char diff = ans.findTheDifference(s, t);
    cout << diff << endl;
    return 0;
} 
