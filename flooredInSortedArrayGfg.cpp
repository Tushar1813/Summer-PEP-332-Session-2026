class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int n=arr.size();
        int ans= -1;
        int s=0,e=n-1;
        while(s<=e){
            int m=(s+e)/2;
            if(arr[m]<=x){
                ans=m;
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
        return ans;
    
    }
};
