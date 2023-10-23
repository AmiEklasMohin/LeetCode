/*https://leetcode.com/problems/valid-anagram/*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return (s == t);
    }
};

int main() {
    string str_one, str_two;
    cin >> str_one >> str_two;
    Solution ans;
    bool anagram_or_not = ans.isAnagram(str_one, str_two);
    if (anagram_or_not) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
