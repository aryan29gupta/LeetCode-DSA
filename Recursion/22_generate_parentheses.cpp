class Solution {
public:
    void helper(int open, int close, string s, vector<string>& ans){
        if(open == 0 && close == 0){
            ans.push_back(s);
            return;
        }
        if(open > 0){
            helper(open-1, close, s+'(', ans);
        }
        if(close>open){
            helper(open, close-1, s+')', ans);
        }

    }

    vector<string> generateParenthesis(int n) {
        string s = "";
        vector<string> ans;
        helper(n, n, s, ans);
        return ans;
    }
};