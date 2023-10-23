/*https://leetcode.com/problems/length-of-last-word/*/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int x = s.length() - 1;
        int length_counter = 0;
        while (s[x] == ' ' and x >= 0) {
            --x;
        }
        for (int i = x; i >= 0; --i) {
            if (s[i] == ' ') {
                break;
            }
            length_counter += 1;
        }
        return length_counter;
    }
};

int main() {
    string input_line;
    getline(cin, input_line);
    Solution ans;
    int length = ans.lengthOfLastWord(input_line);
    cout << length << endl;
    return 0;
}

