class Solution {
public:
    long long MOD = 1e9 + 7;
     long long power(long long x, long long n) {
        long long result = 1;
        x = x % MOD;

        while (n > 0) {
            if (n % 2 == 1) {
                result = (result * x) % MOD;
            }
            x = (x * x) % MOD;
            n /= 2;
        }
        return result;
    }
    
    int countGoodNumbers(long long n) {
        long long even = (n+1)/2;
        long long odd = n/2;

        long long even_part = power(5,even);
        long long odd_part = power(4,odd);

        long long ans = even_part * odd_part % MOD;
        return ans;
    }
};