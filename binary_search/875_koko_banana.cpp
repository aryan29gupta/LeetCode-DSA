class Solution {
public:
    int maxi(vector<int>& piles){
        int maxi=INT_MIN;
        for(int i=0; i<piles.size(); i++){
            maxi=max(piles[i],maxi);
        }
        return maxi;
    }

    long long totalHours(vector<int>& piles, int hours){
        long long totalhours=0;
        for(int i=0; i<piles.size(); i++){
            totalhours+=ceil((double)piles[i]/(double)hours);
        }
        return totalhours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=maxi(piles);
        while(low<=high){
            int mid=(low+high)/2;
            long long totalh=totalHours(piles,mid);
            if(totalh <= h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};