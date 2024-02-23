class Solution(object):
    def countGoodNumbers(self, n):
        p = 10**9 + 7
        even = 0
        pri = 0

        if n % 2 == 0:
            even = n // 2
            pri = n // 2
        else:
            even = (n // 2) + 1
            pri = n // 2

        one = pow(5, even, p)
        two = pow(4, pri, p)

        return (one * two) % p
        