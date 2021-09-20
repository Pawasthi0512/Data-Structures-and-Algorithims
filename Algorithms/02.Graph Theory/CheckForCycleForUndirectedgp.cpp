// # include<bits/stdc++.h>
// using namespace std;
///////////////////////////////////////////////////////////////////////////////////////
// function for cycle detection in graph using BFS

// class Solution {
//   public:
//   bool checkCycleByBfs(vector<int>adj[],vector<int>&visit,int node, int parent){
//       queue<pair<int,int>>q;
//       q.push(make_pair(node,parent));
//       visit[node]=1;
//       while(!q.empty()){
//           node=q.front().first;
//           parent=q.front().second;
//           q.pop();
//         //   for(auto it: adj[node]){
//           for(int i=0; i<adj[node].size();i++){
//               int it=adj[node][i];
//               if(visit[it]==0){
//                   q.push(make_pair(it,node));
//                   visit[it]=1;
//               }
//               else if(it!=parent) return 1;
//           }
//       }
//       return 0;
//   }
  
//     // Function to detect cycle in an undirected graph.
//     bool isCycle(int V, vector<int> adj[]) {
//         // Code here
//         vector<int> visit(V,0);
//         for(int i=0;i<V;i++){
//             if(visit[i]==0){
//                 if(checkCycleByBfs(adj,visit,i,-1)) return 1;
//             }
//         }
//         return 0;
//     }
// };
////////////////////////////////////////////////////////////////////////////////////////


//////////////////////Checking for Cycle using Dfs in undirected graph//////////////////
// class Solution {
//   public:
//   bool checkCycleByDfs(vector<int>adj[],vector<int>&visit,int node, int parent){
//       stack<pair<int,int>>st;
//       st.push(make_pair(node,parent));
//       visit[node]=1;
      
//       while(!st.empty()){
//           node=st.top().first;
//           parent=st.top().second;
//           st.pop();
//         //   for(auto it: adj[node]){
//           for(int i=0; i<adj[node].size();i++){
//               int it=adj[node][i];
//               if(visit[it]==0){
//                   st.push(make_pair(it,node));
//                   visit[it]=1;
//               }
//               else if(it!=parent) return 1;
//           }
//       }
//       return 0;
//   }
  
//     // Function to detect cycle in an undirected graph.
//     bool isCycle(int V, vector<int> adj[]) {
//         // Code here
//         vector<int> visit(V,0);
//         for(int i=0;i<V;i++){
//             if(visit[i]==0){
//                 if(checkCycleByDfs(adj,visit,i,-1)) return 1;
//             }
//         }
//         return 0;
//     }
// };
////////////////////////////////////////////////////////////////////////////////////////