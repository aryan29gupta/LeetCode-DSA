class Solution {
public:
    double myPow(double x, int n) {
        long long N = n; 
        //we use long long to avoid overflow 
        //becuase negative range is slightly different from positive range.
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double ans = 1;
        while (N > 0) {
            if (N % 2 == 1) ans *= x;
            x *= x;
            N /= 2;
        }
        return ans;
    }
};