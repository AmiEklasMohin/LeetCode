#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> vectr;
        for (int i = 1; i <= n; i += 1) {
            if (i % 3 == 0 and i % 5 == 0) {
                vectr.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                vectr.push_back("Fizz");
            } else if (i % 5 == 0) {
                vectr.push_back("Buzz");
            } else {
                string str = to_string(i);
                vectr.push_back(str);
            }
        }
        return vectr;
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
