class Solution {
public:
        bool checkValidString(string s) {
        int cmin = 0, cmax = 0; // open parentheses count in range [cmin, cmax]
    for (char c : s) {
        if (c == '(') {
            cmax++;
            cmin++;
        } else if (c == ')') {
            cmax--;
            cmin--;
        } else if (c == '*') {
            cmax++; // if `*` becomes `(` then openCount++
            cmin--; // if `*` becomes `)` then openCount--
                    // if `*` becomes `` then nothing happens
                    // So openCount will be in new range [cmin-1, cmax+1]
        }
        if (cmax < 0) return false; // Currently, don't have enough open parentheses to match close parentheses -> Invalid
        // For example: ())(
        cmin = max(cmin, 0); // It's invalid if open parentheses count < 0 that's why cmin can't be negative
    }
    return cmin == 0;
    }
};