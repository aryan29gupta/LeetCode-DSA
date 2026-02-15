class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0;
        int c2 = 0;
        int e1 = INT_MIN;
        int e2 = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (c1 == 0 && nums[i] != e2) {
                c1 = 1;
                e1 = nums[i];
            } else if (c2 == 0 && nums[i] != e1) {
                c2 = 1;
                e2 = nums[i];
            } else if (e1 == nums[i])
                c1++;
            else if (e2 == nums[i])
                c2++;
            else {
                c1--;
                c2--;
            }
        }
        int counter1 = 0;
        int counter2 = 0;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (e1 == nums[i])
                counter1++;
            if (e2 == nums[i])
                counter2++;
        }
        if (counter1 > (nums.size() / 3)) {
            ans.push_back(e1);
        }
        if (counter2 > (nums.size() / 3)) {
            ans.push_back(e2);
        }
    return ans;
    }
};