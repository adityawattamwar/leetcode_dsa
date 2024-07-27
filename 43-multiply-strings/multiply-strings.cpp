class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int n1 = num1.size(), n2 = num2.size();
        vector<int> result(n1 + n2, 0);

        // Reverse the strings to make the index matching easier
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        for (int i = 0; i < n1; ++i) {
            for (int j = 0; j < n2; ++j) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = result[i + j] + mul;
                result[i + j] = sum % 10;
                result[i + j + 1] += sum / 10;
            }
        }

        // Remove leading zeros
        while (result.size() > 1 && result.back() == 0) {
            result.pop_back();
        }

        // Convert the result vector back to a string
        string final;
        for (int i = result.size() - 1; i >= 0; --i) {
            final += (result[i] + '0');
        }

        return final;
    }
};
