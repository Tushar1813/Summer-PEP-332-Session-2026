class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        int n=q.size();
        if(n<k){
            return q;
        }
        // for(int i=0;i<k;i++){
        //     int topVal=q.front();
        //     q.pop();
        //     q=reverseFirstK(q,k);
        //     q.push(topVal);
        // }
        // return q;
        
        stack<int> st;
        for(int i=0;i<k;i++){
            st.push(q.front());
            q.pop();
        }
        
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        
        for(int i=0;i<n-k;i++){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};