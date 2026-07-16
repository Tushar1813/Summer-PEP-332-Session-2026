class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        vector<int> ans(n);
        
        for(int i=2*n-1;i>=0;i--){
            int idx=i%n;
            while(!st.empty() && nums[idx]>=st.top()){
                st.pop();
            }
            if(i<n){
                if(!st.empty()){
                    ans[i]=st.top();
                }
                else{
                    ans[i]=-1;
                }
            }
            st.push(nums[idx]);
            
        }
        
        return ans;
    }
};