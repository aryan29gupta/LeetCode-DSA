class Solution {
public:
    void swapNo(int &a, int &b){
        int c;
        c = a;
        a = b;
        b = c;
    }
    void getPerms(vector<int>& nums, int index, vector<vector<int>>& ans){
        if(index == nums.size()) {
            ans.push_back(nums);
            return;
        }

        for(int i = index; i<nums.size(); i++){
            swapNo(nums[index],nums[i]);
            getPerms(nums,index+1,ans);
            swapNo(nums[index],nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int index = 0;
        vector<vector<int>> ans;
        getPerms(nums, index, ans);
        return ans;
    }
};