// LeetCode 268 - Missing Number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int actual_sum=0;
        int predicted_sum=0;
        int n=nums.size();
        int value;
        for(int i=0;i<n;i++){
            actual_sum+=nums[i];
            predicted_sum=(n*(n+1))/2;
        }
        value = predicted_sum-actual_sum;
        return value;
    }
};