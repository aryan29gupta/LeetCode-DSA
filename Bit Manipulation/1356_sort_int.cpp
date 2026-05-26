class Solution {
public:
    int countBits(int n){
        int cnt = 0;
        while(n){
            cnt += (n & 1);
            n >>= 1;
        }
        
        return cnt;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        
        sort(arr.begin(), arr.end(), [&](int a, int b){
            
            int bitsA = countBits(a);
            int bitsB = countBits(b);
            
            if(bitsA == bitsB)
                return a < b;
            
            return bitsA < bitsB;
        });
        
        return arr;
    }
};