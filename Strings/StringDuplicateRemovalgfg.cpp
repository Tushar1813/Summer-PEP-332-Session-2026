class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        vector<bool> seen(256, false);
        
        string ans="";
        for(char i : s){
            if(!seen[i]){
                ans+=i;   // concatinate
                seen[i]= true;
            }
        }
        return ans;
         
    }
};


