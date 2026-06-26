class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        // code here
        int pivot= -1;
        int n=arr.size();
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
                pivot=i+1;
                break;
            }
        }
        
        if(pivot == -1)
            pivot = 0; 
            
        int left=pivot;
        int right=(pivot-1+n)%n;
        
        while(left!=right){
            int sum=arr[left]+arr[right];
            
            if(sum==target){
                return true;
            }
            else if(sum<target){
                left=(left+1)%n;
            }
            else{
                right=(right-1+n)%n;
            }
        }
        return false;
    }
};
