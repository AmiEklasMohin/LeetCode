/*https://leetcode.com/problems/power-of-three/*/
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        while (n > 1 and (n % 3) == 0) {
            n /= 3;
        }
        return n == 1;
    }
};

int main() {
    int num;
    cin >> num;
    Solution ans;
    bool flag = ans.isPowerOfThree(num);
    if (flag) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
