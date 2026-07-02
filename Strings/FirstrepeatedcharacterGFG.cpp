class Solution {
  public:
    string firstRepChar(string s) {
        vector<bool> seen(256,false);
        string ans="";
        for(char i:s){
            if(seen[i]){
                ans+=i;
                return ans;
            }
            seen[i]=true;
        }
        return "-1";
        
    }
};