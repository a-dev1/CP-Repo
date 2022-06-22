#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define endl "\n"
using namespace std;

const int N = 3e5 + 10, inf = 1e16;
vector<pair<int, int>> gr[N];
vector<int> tin(N), tout(N), dep(N);
int up[N][20], timer = 0, mup[N][20];

void calc(int v, int pr = 1, int w = inf) {
  up[v][0] = pr;
  mup[v][0] = min(mup[v][0], w);
  tin[v] = timer++;
  for (int i = 1; i < 20; i++) {
    up[v][i] = up[up[v][i - 1]][i - 1];
    mup[v][i] = min(mup[v][i - 1], mup[up[v][i - 1]][i - 1]);
  }
  for (auto it : gr[v]) {
    int to = it.first;
    int w = it.second;
    if (to != pr) {
      dep[to] = dep[v] + 1;
      calc(to, v, w);
    }
  }
  tout[v] = timer++;
}
bool upper(int a, int b) { return tin[a] <= tin[b] && tout[a] >= tout[b]; }
int lca(int a, int b) {
  if (upper(a, b)) return a;
  if (upper(b, a)) return b;
  for (int i = 19; i >= 0; i--) {
    if (!upper(up[a][i], b)) {
      a = up[a][i];
    }
  }
  return up[a][0];
}
int dist(int a, int b) { return dep[a] + dep[b] - 2 * dep[lca(a, b)]; }

int parmin(int l, int r) {
  int res = inf;
  for (int i = 19; i >= 0; i--) {
    if (r == l) break;
    if (upper(r, up[l][i])) {
      res = min(res, mup[l][i]);
      l = up[l][i];
    }
  }
  return res;
}

int getmin(int l, int r) {
  int mid = lca(l, r);
  int ans = inf;
  ans = min(parmin(l, mid), parmin(r, mid));
  return ans;
}

main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, m;
  cin >> n >> m;
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j < 20; j++) {
      mup[i][j] = inf;
    }
  }
  
  for (int i = 1; i <= m; i++) {
    int l, r, w;
    cin >> l >> r >> w;
    gr[l].pb({r, w});
    gr[r].pb({l, w});
  }
  calc(1);
  int q;
  cin >> q;
  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << getmin(l, r) << endl;
  }
}