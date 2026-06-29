class Solution {
public:

    int firstOccurence(vector<int>& nums, int target){
        int n=nums.size();
        int ans= -1;
        int l=0,h=n-1;
        
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]==target){
                ans=m;
                h=m-1; //left search
            }
            else if(nums[m]>target){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;

    }

    int lasttOccurence(vector<int>& nums, int target){
        int n=nums.size();
        int ans= -1;
        int l=0,h=n-1;
        
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]==target){
                ans=m;
                l=m+1;   //right search
            }
            else if(nums[m]>target){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;

    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return { firstOccurence(nums,target), lasttOccurence(nums,target)};
    }
};