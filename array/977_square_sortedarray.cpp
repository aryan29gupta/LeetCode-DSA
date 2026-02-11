class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> square;
        int value;
        for(int i=0; i<nums.size(); i++){
            value=nums[i]*nums[i];
            square.push_back(value);
        }
        sort(square.begin(),square.end());
        return square;
    }
};