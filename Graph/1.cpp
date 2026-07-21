#include<iostream>
#include <list>
#include <unordered_map>
using namespace std;

int main(){
    int n;//no of vertices or nodes
    int m;//no of edges
    cout<<"Enter the no of vertices:"<<endl;
    cin>>n;
    cout<<"Enter the no of edges:"<<endl;
    cin>>m;

    unordered_map<int, list<int>> adjList;
    for(int i=0;i<m;i++){
        int u,v;
        cin>> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u); //this is only when the graph is undirected


    }

    cout<<"Adjacency List: "<< endl;

    for(auto i: adjList){
        cout<<i.first<< " -> ";
        for(auto j: i.second){
            cout<<j<<" , ";
        }
        cout<<endl;
    }
}