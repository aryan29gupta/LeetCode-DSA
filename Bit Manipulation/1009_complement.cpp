class Solution {
public:
    int bitwiseComplement(int n) {
        int temp = n;
        int val = 0;
        if (n==0) return 1;
        while(temp){
            val = (val<<1)|1;
            temp = temp>>1;
        }
        return n^val;
    }
};