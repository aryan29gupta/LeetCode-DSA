class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int ans1 = nums.size();
        int ans2 = nums.size();
        vector<int> ans;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] >= target) {
                ans1 = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        low=0;
        high=nums.size()-1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] > target) {
                ans2 = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        if(ans1==nums.size() || nums[ans1]!=target){
            return {-1,-1};
        }
        ans.push_back(ans1);
        ans.push_back(ans2-1);
        return ans;
    }
};