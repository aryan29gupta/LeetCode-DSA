class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxp=nums[0];
        int minp=nums[0];
        int ans=nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i]<0){
                swap(minp,maxp);
            }
            minp=min(nums[i],nums[i]*minp);
            maxp=max(nums[i],nums[i]*maxp);
            ans=max(maxp,ans);
        }
        return ans;
    }
};