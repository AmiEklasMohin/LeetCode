/*https://leetcode.com/problems/reverse-integer/*/
#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long reversed_num = 0;
        long temp = abs(x);
        while (temp != 0) {
            reversed_num = reversed_num * 10 + temp % 10;
            temp /= 10;
        }
        if (x < 0) {
            reversed_num = reversed_num * (-1);
        }
        if (reversed_num < INT_MIN or reversed_num > INT_MAX) {
            return 0;
        }
        return (int)(reversed_num);
    }
};

int main() {
    int num, reversed_num;
    cin >> num;
    Solution ans;
    reversed_num = ans.reverse(num);
    cout << reversed_num << endl;
    return 0;
}
