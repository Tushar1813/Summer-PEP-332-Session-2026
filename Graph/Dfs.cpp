class Solution {
  public:
   //Create a visisted array to keep track of visited nodes
   //strat DFS from node 0
   //mark current node as visited and add it in ans
   //visit all unvisited neighbours recursively
   //when all recursive calls  finish ,return the DFS traversal
    void dfsHelper(int node, vector<vector<int>>&adj,vector<bool> &visited, vector<int> &result){
        visited[node]=true; //mark the current as visited
        
        result.push_back(node);
        //visite all unvisited neighbours
        
        for(auto neighbour: adj[node]){
            if(!visited[neighbour]){
                dfsHelper(neighbour,adj,visited,result);
            }
        }
    }
    
    
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int V=adj.size();
        vector<bool> visited(V,false);
        
        vector<int> result;
        dfsHelper(0,adj,visited,result);
        return result;
    }
};