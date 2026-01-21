// LeetCode 1752 - Array Sorted and Rotated

class Solution {
public:
    bool check(vector<int>& nums) {
        int counter = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%nums.size()]){
                counter++;
            }
            if (counter > 1){
                return false;
            }
        }
        return true;
    }
};