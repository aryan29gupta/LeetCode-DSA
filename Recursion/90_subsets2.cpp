class Solution {
public:
    void answer(vector<int>& nums, vector<int> ans, int i, vector<vector<int>>& final_ans) {
        sort(nums.begin(), nums.end());
        if (i == nums.size()) {
            final_ans.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        answer(nums, ans, i + 1, final_ans);
        ans.pop_back();
        while(i!=nums.size()-1 && nums[i+1]==nums[i]) i++;
        answer(nums, ans, i + 1, final_ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> final_ans;
        int i = 0;
        answer(nums, ans, i, final_ans);
        return final_ans;
    }
};
