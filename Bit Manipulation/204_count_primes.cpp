class Solution {
public:
    int countPrimes(int n) {
        vector<int> prime(n, 1);

        if(n <= 2) return 0;

        prime[0] = prime[1] = 0;

        for(int i = 2; i * i < n; i++){
            if(prime[i]){
                for(int j = i * i; j < n; j += i){
                    prime[j] = 0;
                }
            }
        }

        int c = 0;

        for(int i = 2; i < n; i++){
            if(prime[i]) c++;
        }

        return c;
    }
};