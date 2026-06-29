class Solution {
public:
    int largestElementInArray(vector<int>& piles){
        int maximum=INT_MIN;
        for(int i=0;i<piles.size();i++){
            maximum=max(maximum,piles[i]);
        }
        return maximum;
    }

    long long calculateHours(vector<int>& piles, int k){
        long long totalHours=0;
        for(int i=0;i<piles.size();i++){
            totalHours+=ceil(double(piles[i])/double(k));
        }
        return totalHours;
    }


    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high= largestElementInArray(piles);
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hours=calculateHours(piles,mid);
            if(hours<=h){
                ans= mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};