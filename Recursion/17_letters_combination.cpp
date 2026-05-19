class Solution {
public:
    vector<string> ans;
    vector<string> mp = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void solve(int idx, string &digits, string temp) {
        if(idx == digits.size()) {
            ans.push_back(temp);
            return;
        }

        string s = mp[digits[idx] - '0'];

        for(int i = 0; i < s.size(); i++) {
            solve(idx + 1, digits, temp + s[i]);
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return {};

        solve(0, digits, "");
        return ans;
    }
};