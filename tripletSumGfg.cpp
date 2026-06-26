class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++){     //since we need three elements here 
            int s=i+1,e=n-1;
            while(s<e){
                int sum=arr[i]+arr[s]+arr[e];
                if(sum==target){
                    return true;
                }
                else if(sum>target){
                    e--;
                }
                else{
                    s++;
                }
                
            }
        }
        return false;
    }
};