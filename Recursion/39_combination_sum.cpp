class Solution {
public:
    void solve(int idx, int target, vector<int>& candidates,
               vector<int>& temp, vector<vector<int>>& ans) {

        if(target == 0) {
            ans.push_back(temp);
            return;
        }

        if(idx == candidates.size()) {
            return;
        }

        if(candidates[idx] <= target) {
            temp.push_back(candidates[idx]);

            solve(idx, target - candidates[idx], candidates, temp, ans);

            temp.pop_back();
        }

        solve(idx + 1, target, candidates, temp, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        vector<int> temp;

        solve(0, target, candidates, temp, ans);

        return ans;
    }
};