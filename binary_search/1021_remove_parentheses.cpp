class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int c = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                if(c>0){
                    result+=s[i];
                }
                c++;
            }
            if(s[i]==')'){
                c--;
                if(c>0){
                    result+=s[i];
                }
            }
        }
        return result;
    }
};