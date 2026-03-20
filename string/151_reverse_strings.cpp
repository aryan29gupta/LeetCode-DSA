class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int end = s.size();

        for(int i = s.size() - 1; i >= 0; i--) {

            if(s[i] == ' ') {
                if(i + 1 < end) {
                    if(!result.empty()) result += " ";
                    result += s.substr(i + 1, end - i - 1);
                }
                end = i;
            }
        }

        if(end > 0) {
            if(!result.empty()) result += " ";
            result += s.substr(0, end);
        }

        return result;
    }
};