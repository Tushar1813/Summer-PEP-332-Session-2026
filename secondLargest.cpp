class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int max=-1;
        int s_max=-1;
        for(int i:arr){
            if(i>max){
                s_max=max;
                max=i;
            }
            else if(i>s_max && i<max){
                s_max=i;
            }
        }
        return s_max;
        
    }
};