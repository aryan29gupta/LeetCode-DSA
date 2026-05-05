class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        int i = 1;
        int a = 0;
        int b = 0;
        int c = 1;
        int d;
        while(i<n){
            d = a+b+c;
            a = b;
            b = c;
            c = d;
            i++;
        }
        return d;
    }
};