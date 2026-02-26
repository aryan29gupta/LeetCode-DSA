class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> ans;
        int low = 0;
        int high = nums.size();
        int mid = (low+high)/2;
        for(int i=0; i<nums.size(); i++){
            if(mid<nums.size()){
            ans.push_back(nums[i]);
            ans.push_back(nums[mid]);
            mid++;
            }
        }
        return ans;
    }
};