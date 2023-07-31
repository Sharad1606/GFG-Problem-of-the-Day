class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(int v,vector<int> adj[],vector<int>& ans,bool* visited,int k){
                ans.push_back(k);
                visited[k]=1;
        for(int i=0;i<adj[k].size();i++){
            if(!visited[adj[k][i]]){
                dfs(v,adj,ans,visited,adj[k][i]);
            }
        }
    }
    
    
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        
        bool visited[v]={0};
        vector<int> ans;
        dfs(v,adj,ans,visited,0);
        return ans;
        
    }
};