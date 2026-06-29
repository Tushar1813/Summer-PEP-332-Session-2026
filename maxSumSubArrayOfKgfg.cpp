class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int currSum=0;
        int maxSum=0;
        
        for(int i=0;i<k;i++){
            currSum+=arr[i];
        }
        maxSum=currSum;
        
        for(int i=k;i<n;i++){
            currSum=currSum-arr[i-k]+arr[i];
            if(currSum>maxSum){
                maxSum=currSum;
            }
        }
        return maxSum;
        
    }
};