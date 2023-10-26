/*https://leetcode.com/problems/power-of-two/*/
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 0) {
            return false;
        }
        while (n % 2 == 0 && n > 0) {
            n /= 2;
        }
        return n == 1;
    }
};

int main() {
    int num;
    cin >> num;
    Solution ans;
    bool flag;
    flag  = ans.isPowerOfTwo(num);
    if (flag) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
} 
