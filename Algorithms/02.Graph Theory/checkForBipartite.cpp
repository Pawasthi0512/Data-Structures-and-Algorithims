
////////////////////////Checking for Bipartite Using BFS/////////////////////////
// bool checkingBipartiteUsingBfs(vector<int>adj[],vector<int> &visit, int node,int parent){
        
//         queue<pair<int,int>>q;
//         q.push(make_pair(node,parent));
//         visit[node]=0;
//         while(!q.empty()){
//             node=q.front().first;
//             parent=q.front().second;
//             q.pop();
            
//             for(int i=0;i<adj[node].size();i++){
//                 int it=adj[node][i];
//                 if(visit[it]==-1){
//                     q.push(make_pair(it,node));
//                     visit[it]=visit[node]?0:1;
//                 }
                    //If  node is not same with parent and they have same color This means we can't have bipartite graph; 
//                 else if(it!= parent && visit[it]==visit[node]){
//                     return 1;
//                 }
//             }
//         }
//         return 0;
        
        
//     }
// 	bool isBipartite(int V, vector<int>adj[]){
// 	    // Code here
// 	    vector<int>visit(V,-1);
// 	    for(int i=0;i<V;i++){
// 	        if(visit[i]==-1){
// 	            if(checkingBipartiteUsingBfs(adj,visit,i,-1)) return 0;
// 	        }
// 	    }
// 	    return 1;
// 	}
//////////////////////////////////////////////////////////////////////////////////


///////////////////////Checking for Bipartite Graph Using Dfs/////////////////////
// bool checkingBipartiteUsingDfs(vector<int>adj[],vector<int> &visit, int node,int parent){
        
//         stack<pair<int,int>>st;
//         st.push(make_pair(node,parent));
//         visit[node]=0;
//         while(!st.empty()){
//             node=st.top().first;
//             parent=st.top().second;
//             st.pop();
            
//             for(int i=0;i<adj[node].size();i++){
//                 int it=adj[node][i];
//                 if(visit[it]==-1){
//                     st.push(make_pair(it,node));
//                     visit[it]=visit[node]?0:1;
//                 }
//                 else if(it!= parent && visit[it]==visit[node]){
//                     return 1;
//                 }
//             }
//         }
//         return 0;
        
        
//     }
// 	bool isBipartite(int V, vector<int>adj[]){
// 	    // Code here
// 	    vector<int>visit(V,-1);
// 	    for(int i=0;i<V;i++){
// 	        if(visit[i]==-1){
// 	            if(checkingBipartiteUsingDfs(adj,visit,i,-1)) return 0;
// 	        }
// 	    }
// 	    return 1;
// 	}
//////////////////////////////////////////////////////////////////////////////////