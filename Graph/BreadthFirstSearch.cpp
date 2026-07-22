class Solution{
    public:
    //create avisited array to keep track of visited nodes
    //create a que for bfs traversal
    // start from any node and mark it visited and push it in the queue
    //while(!q.empty){
    //remove the front node
    //add it to ans
    //visit all neighbours and mark them visited and push tghem in queue
    //return traversal output

    vector<int> bfs(vector<vector<int>> &adj){
        int V=adj.size();
        vector<int> bfsResult;
        vector<bool> visited(V,false);
        queue<int> q;
        q.push(0);
        visited[0]=true;
        while(!q.empty()){
            int front=q.front();
            q.pop();

            bfsResult.push_back(front);
            for(auto neighbour: adj[front]){
                if(!visited[neighbour]){
                    visited[neighbour]=true;
                    q.push(neighbour);
                }

            }
        }
        return bfsResult;
    }
}