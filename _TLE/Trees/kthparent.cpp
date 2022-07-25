class TreeAncestor {
    vector<vector<int>> up;
    vector<int> depth;
    int nn;
    int LOG;
public:
    TreeAncestor(int n, vector<int>& parent) {
              LOG = 0;
        while((1 << LOG) <= n) {
            LOG++;
        }
        up = vector<vector<int>> (n, vector<int>((log2(n) + 5)));
        depth = vector<int>(n);
        nn = n;    
        //O(N*logk)
        parent[0] = 0;
        for(int i = 0; i < n; i++) {
            up[i][0] = parent[i];
            
            if(i != 0)
                depth[i] = depth[parent[i]] + 1;
            for(int j = 1; j <= log2(n); j++) {
                up[i][j] = up[up[i][j-1]][j-1];
            }
        }

     }
    int getKthAncestor(int node, int k) {
        for(int i = 0; i < nn; i++) cout << depth[i] << " ";
        cout << '\n';
        if(k > depth[node]) return -1;
        for(int i = 0; i <= log2(k); i++) {
            if(k & (1 << i)) node = up[node][i];
        }
        return node;
    }
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */