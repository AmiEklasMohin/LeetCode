/*https://leetcode.com/problems/ugly-number/*/
#include <iostream>
using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) {
            return false;
        }
        while (n % 2 == 0) {
            n /= 2;
        }
        while (n % 3 == 0) {
            n /= 3;
        }
        while (n % 5 == 0) {
            n /= 5;
        }
        return n == 1;
    }
};

int main() {
    int num;
    cin >> num;
    Solution ans;
    bool ugly_num = ans.isUgly(num);
    if(ugly_num) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
