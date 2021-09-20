////////////////////////////////////cycle detection in directed graph using DFS////////////////
// bool dfs(vector<int> adj[],vector<int>&visit,vector<int>&selfVisit,int node){
//         visit[node]=1;
//         selfVisit[node]=1;
//         for(auto it:adj[node]){
//             if(visit[it]==0){
//                 if(dfs(adj,visit,selfVisit,it)) 
//                     return true;
//             }
//             else if(selfVisit[it]==1)
//                 return true;
//         }
//         selfVisit[node]=0;
//         return false;
//     }
//     // Function to detect cycle in a directed graph.
//     bool isCyclic(int V, vector<int> adj[]) {
//         vector<int>visit(V,0);
//         vector<int>selfVisit(V,0);
//         for(int i=0;i<V;i++){
//             if(visit[i]==0){
//                 if(dfs(adj,visit,selfVisit,i)) 
//                     return true;
//             }
//         }
//         return false;
//     }
////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////cycle detection in directed graph using bfs//////////////////////////////
//  Here we use a hack of Topo Sort that topoSort exist if and only if graph is directed and acyclic
// in the question graph is directed is given therefore if toposort doesn't exist then graph must be
//cyclic.

// bool isCyclic(int V, vector<int> adj[]) {
//        vector<int>indg(V,0);
//        vector<int>res;
//        queue<int>q;
//        for(int i=0;i<V;i++){
//            for(auto it:adj[i])
//                 indg[it]++;
//        }
//        for(int i=0;i<V;i++){
//            if(indg[i]==0)
//             q.push(i);
//        }
//        int count=0;
//        while(!q.empty()){
//            int node=q.front();
//            q.pop();
//            count++;
//            res.push_back(node);
//            for(auto it:adj[node]){
//                indg[it]--;
//                if(indg[it]==0)
//                     q.push(it);
//            }
//        }
//        if(V==count)
//             return false;
//         else
//             return true;
//     }
////////////////////////////////////////////////////////////////////////////////////////////////