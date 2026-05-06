class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> ans;
        int l;
        int w;
        w = sqrt(area);
        while(area % w!=0){
            w--;
        }
        l = area / w;
        ans.push_back(l);
        ans.push_back(w);
        return ans;
    }
};