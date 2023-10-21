/*https://leetcode.com/problems/sqrtx/*/
#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        x = sqrt(x);
        return x;
    }
};

int main() {
    int x, sqrt_x;
    cin >> x;
    Solution ans;
    sqrt_x = ans.mySqrt(x);
    cout << sqrt_x << endl;
    return 0;
} 
