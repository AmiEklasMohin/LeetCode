/*https://leetcode.com/problems/fibonacci-number/*/
#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        int fibo[31];
        fibo[0] = 0;
        fibo[1] = 1;
        for (int i{2}; i <= 30; ++i) {
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        }
        return fibo[n];
    }
};

int main() {
    int n, fib_n;
    cin >> n;
    Solution ans;
    fib_n = ans.fib(n);
    cout << fib_n << endl;
    return 0;
} 
