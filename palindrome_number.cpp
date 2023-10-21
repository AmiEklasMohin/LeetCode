/*https://leetcode.com/problems/palindrome-number/*/
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long temp = x, y = 0;
        while(temp > 0) {
            y = y * 10 + temp % 10;
            temp /=  10;
        }
        return (x == y);
    }
};

int main() {
    int num;
    cin >> num;
    Solution ans;
    bool check_palindrome = ans.isPalindrome(num);
    if (check_palindrome) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
} 
