#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, 
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        
        int number = 0;
        for (int i = 0; i < s.length() - 1; ++i) {
            if (roman[s[i]] < roman[s[i+1]]) {
                number -= roman[s[i]];
            } else {
                number += roman[s[i]];
            }
        }
        return number + roman[s[s.length() - 1]];
    }
};

int main() {
    Solution solution;
    string romanNumeral = "MCMXCIV"; // Example Roman numeral
    cout << "Integer value of " << romanNumeral << " is: " << solution.romanToInt(romanNumeral) << endl;
    return 0;
}

