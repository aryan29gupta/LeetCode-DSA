class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int a = 0;
        int b = 1;
        int i = 1;
        int c;
        while (i < n) {
            c = a + b;
            a = b;
            b = c;
            i++;
        }
        return c;
    }
};