class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start^goal;
        int c = 0;
        while(ans>0){
            if(ans%2==1) c++;
            ans = ans/2;
        }
        return c;
    }
};