//Moore's Voting Algorithm Approach

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element;
        int c=0;
        for (int i=0; i<nums.size(); i++){
            if (c==0){
                c=1;
                element=nums[i];
            }
            else if(nums[i]==element){
                c++;
            }
            else{
                c--;
            }
        }
        c=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==element){
                c++;
            }
        }
        if(c>(nums.size()/2)){
            return element;
        }
    return -1;
    }
};