/*https://leetcode.com/problems/roman-to-integer/*/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int integer_value = 0;
        for (int i = (s.length() - 1); i >= 0 ; --i) {
            if (s[i] == 'I') {
                integer_value += 1;
            } else if (s[i] == 'V') {
                if (i > 0 and s[i - 1] == 'I') {
                    integer_value += 4;
                    i -= 1;
                } else {
                    integer_value += 5;
                }
            } else if(s[i] == 'X') {
                if (i > 0 and s[i - 1] == 'I') {
                    integer_value += 9;
                    i -= 1;
                } else {
                    integer_value += 10;
                }
            } else if (s[i] == 'L') {
                if (i > 0 and s[i - 1] == 'X') {
                    integer_value += 40;
                    i -= 1;
                } else {
                    integer_value += 50;
                }
            } else if(s[i] == 'C') {
                if (i > 0 and s[i - 1] == 'X') {
                    integer_value += 90;
                    i -= 1;
                } else {
                    integer_value += 100;
                }
            } else if (s[i] == 'D') {
                if (i > 0 and s[i - 1] == 'C') {
                    integer_value += 400;
                    i -= 1;
                } else {
                    integer_value += 500;
                }
            } else if(s[i] == 'M') {
                if (i > 0 and s[i - 1] == 'C') {
                    integer_value += 900;
                    i -= 1;
                } else {
                    integer_value += 1000;
                }
            }
        }
        return integer_value;
    }
};

int main() {
    string roman_number;
    int integer_number;
    cin >> roman_number;
    Solution ans;
    integer_number = ans.romanToInt(roman_number);
    cout << integer_number << endl;
    return 0;
} 
