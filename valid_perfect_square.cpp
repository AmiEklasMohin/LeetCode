/*https://leetcode.com/problems/valid-perfect-square/*/
#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        int sqrt_num = sqrt(num);
        return sqrt_num * sqrt_num == num;
    }
};

int main() {
    int num;
    cin >> num;
    Solution ans;
    bool perfect_square  = ans.isPerfectSquare(num);
    if (perfect_square) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
} 
