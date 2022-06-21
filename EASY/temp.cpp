class TreeAncestor {
public:
    vector<vector<int>> up;
    // vector<int> depth;
    
    TreeAncestor(int n, vector<int>& parent) {
        up = vector<vector<int>> (n, vector<int>((log2(n) + 5)));
        
        for(int i = 0; i < n; i++) 
            up[i][0] = parent[i];
        
        for(int j = 1; j <= log2(n); j++) {
              for(int i = 0; i < n; i++) {
                  if(up[i][j-1]==-1) up[i][j] = -1;
                  else up[i][j] = up[up[i][j-1]][j-1];
              }
         }
        
        // for(int i = 1; i <= log2(n); i++) {
        //     for(int j = 0; j < n; j++) {
        //         if(up[j][i-1] == -1) up[j][i] = -1;
        //         else up[j][i] = up[ up[j][i-1] ][j-1];
        //     }
        // }

     }
    
    int getKthAncestor(int node, int k) {
        for(int i = 0; i <= log2(k); i++) {
            
            if(k & (1 << i)) {
                if(node == -1) node = -1;
                else node = up[node][i];   
            } 
            
            
        }
        
        return node;
    }
};
