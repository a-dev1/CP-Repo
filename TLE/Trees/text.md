a-cyclic connected graph.
N nodes -> we need (n-1) edges.

Degree of a Node -> the no. of other nodes it is connected to. 
(if directed graph the degree is no. of outgoing edges)

sum of degree of all nodes = 2 * (n-1) {no. of edges}
//this is an even number 

Rooted {the entire tree hangs on a node called root node} 
Un-rooted Tree 

Level of a Node:-
     0
    / \
   0   0
  / \ / \
 0  0 0  0

No. of edges we have to travel to reach that node. 
Level of root is 0 bcz there is 0 edges between root to root offcourse

No. of parents can be 0 or 1;
-----------------------------
it is 0 when x is the root
it is 1 when x is not the root

Every tree is a graph, but vice-versa is not true.


SubTree + Ancestor/Descendants
--------  -------------------
Subtree of x -> all the children of x and children of children of x (we go down and down).

Ancestor => every node we encounter in the path while going towards the root are the ancestors of that node.

Descendants => all the nodes in the subtree accept that particular node. 

How to check if a node is an Ancestor/Descendant of another node?

DFS (Depth First Search)
------------------------
It's not able pre-order, post-order and in-order, these are specifically for binary trees. 

We go to a node and we kept going down. 
Code:-
Storing a tree in adjacency list

vector<vector<int>> adj(n, vector<int>());

for(int i = 0; i < n-1; i++) {
  int a, b;
  cin >> a >> b;
  adj[a-1].pb(b-1);
  adj[b-1].pb(a-1);
}

//considering root to be 0 
int root = 0;

vector<bool> visited(n);
vector<int> seq(n);
dfs(0, adj, visited);

void dfs(int root, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& seq) {
  seq.push_back(root);
  vis[root] = 1;
  for(int child: adj[root]) {
    if(!visited[child]) {
      dfs(child, adj, vis, seq)
    }
  }
}























