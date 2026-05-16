class Solution {
public:
    void solve(int i, int target, vector<int>& candidates,
               vector<int>& temp, vector<vector<int>>& ans) {
        
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        if (i >= candidates.size() || target < 0)
            return;

        temp.push_back(candidates[i]);
        solve(i + 1, target - candidates[i], candidates, temp, ans);
        temp.pop_back();

        while (i + 1 < candidates.size() &&
               candidates[i] == candidates[i + 1]) {
            i++;
        }

        solve(i + 1, target, candidates, temp, ans);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> temp;

        solve(0, target, candidates, temp, ans);

        return ans;
    }
};