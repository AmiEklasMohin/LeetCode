/*https://leetcode.com/problems/power-of-four/*/
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        while (n % 4 == 0 and n > 0) {
            n /= 4;
        }
        return (n == 1);
    }
};

int main() {
    int num;
    cin >> num;
    Solution ans;
    bool result = ans.isPowerOfFour(num);
    if (result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
