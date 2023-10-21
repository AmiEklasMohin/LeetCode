/*https://leetcode.com/problems/fizz-buzz/*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> fizzbuzz;
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0 and i % 5 == 0) {
                fizzbuzz.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                fizzbuzz.push_back("Fizz");
            } else if (i % 5 == 0) {
                fizzbuzz.push_back("Buzz");
            } else {
                string str = to_string(i);
                fizzbuzz.push_back(str);
            }
        }
        return fizzbuzz;
    }
};

int main() {
    int num;
    cin >> num;
    Solution ans;
    vector<string> fizzbuzz = ans.fizzBuzz(num);
    for (string x : fizzbuzz) {
        cout << x << " ";
    }
    cout << endl;
}
