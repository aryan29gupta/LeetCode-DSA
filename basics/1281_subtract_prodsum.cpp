//LeetCode 1281 - Subtract the Product and Sum of Digits of an Integer
class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        int diff=0;
        while(n>0){
            int a = n%10;
            n = n/10;
            prod*=a;
            sum+=a;
        }
        diff=prod-sum;
        return diff;
    }
};