class Solution {
public:
    bool minimizeSum(vector<int> &nums, int mid, int k){
        int count=1;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]+sum <= mid){
                sum+=nums[i];
            }
            else{
                count++;
                sum=nums[i];
            }
        }
        if (count<=k)return true;
        else return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(), nums.end());
        int high=accumulate(nums.begin(), nums.end(), 0);
        while(low<=high){
            int mid=(low+high)/2;
            bool ans=minimizeSum(nums, mid, k);
            if(ans == true){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return low;
    }
};