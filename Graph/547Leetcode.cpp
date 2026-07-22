class Solution {
public:
    //create a visit array
    //loop through every city
    //if city not visited ,strat dfs from it
    //dfs marks all directly and indirectly connected cities as visited
    ////increse the provience count after each dfs call
    //return total no of provience count

    void dfsHelper(int city, vector<vector<int>>& isConnected, vector<bool>&visited){
        visited[city]=true;
        //check all possible neighbours
        for(int neighbour=0;neighbour<isConnected.size();neighbour++){
            //if cities are connected and neighbour is not visited
            if(isConnected[city][neighbour]==1 && !visited[neighbour]){
                dfsHelper(neighbour,isConnected,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        vector<bool> visited(V,false);
        int provCount=0;

        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfsHelper(i,isConnected,visited);
                provCount++;
            }
        }
        return provCount;
    }
};