#include <bits/stdc++.h>
using namespace std;

// A utility function to do DFS of graph
// recursively from a given vertex u.
void DFSUtil(int u, vector<int> adj[],
                    vector<bool> &visited)
{
    visited[u] = true;
    cout << u << " ";
    for (int i=0; i<adj[u].size(); i++)
        if (visited[adj[u][i]] == false)
            DFSUtil(adj[u][i], adj, visited);
}
 
// This function does DFSUtil() for all 
// unvisited vertices.
void DFS(vector<int> adj[], int V)
{
    vector<bool> visited(V, false);
    for (int u=0; u<V; u++)
        if (visited[u] == false)
            DFSUtil(u, adj, visited);
}

int main(){
	
	int n;
	cout<<"how many vertices";
	cin>>n;

			vector< list<int> > adj(n);
				
				for(int i=0;i<adj.size();i++){   // total number of vertices

						 int temp;
						 scanf("%d",&temp);
					for(int j=0;j<temp;j++){           //for no. of vertices 
						int val;
						scanf("%d",&val);
					    adj[i].push_back(val);    

					   }
					   }        

					   DFS(adj,n);

			// adj[0].push_back(1);
			// adj[0].push_back(2);
			// adj[1].push_back(2);
			// adj[1].push_back(3);
			// adj[2].push_back(3);
			// adj[2].push_back(4);

		/*	int c=0;
				for(vector< list<int> >::iterator it=adj.begin(); it!=adj.end(); it++){

				cout<<"vertices connected to node "<<c<<" are ";

					list<int> li = *it;
					for(list<int>::iterator t=li.begin(); t!=li.end(); t++){

						cout<<*t<<" ";
						cout<<"\n";
						c++;
					}
				}*/

				return 0;
}