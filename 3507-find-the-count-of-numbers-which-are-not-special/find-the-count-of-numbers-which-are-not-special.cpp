#include <vector>
#include <cmath>

class Solution {
public:
    int nonSpecialCount(int l, int r) {
        int sqrt_r = std::sqrt(r);
        std::vector<bool> is_prime(sqrt_r + 1, true);
        is_prime[0] = is_prime[1] = false;
        for (int i = 2; i * i <= sqrt_r; ++i) {
            if (is_prime[i]) {
                for (int j = i * i; j <= sqrt_r; j += i) {
                    is_prime[j] = false;
                }
            }
        }

        int special_count = 0;
        for (int i = 2; i <= sqrt_r; ++i) {
            if (is_prime[i]) {
                long long square = static_cast<long long>(i) * i;
                if (square >= l && square <= r) {
                    ++special_count;
                }
            }
        }

        int total_numbers = r - l + 1;
        return total_numbers - special_count;
    }
};
