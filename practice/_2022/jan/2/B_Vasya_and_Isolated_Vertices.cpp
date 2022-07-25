#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <fstream>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define ii pair <int, int>
#define app push_back
#define all(a) a.begin(), a.end()
#define bp __builtin_popcountll
#define ll long long
#define mp make_pair
#define x first
#define y second
#define Time (double)clock()/CLOCKS_PER_SEC
#define debug(x) std::cerr << #x << ": " << x << '\n';
#define FOR(i, n) for (int i = 0; i < n; ++i)
#define pb push_back
#define trav(a, x) for (auto& a : x)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define ps(x,y) fixed<<setprecision(y)<<x
using vi = vector<int>;
 
//policy based data structure
typedef tree< pair<int,int>, null_type, less<pair<int,int >>, rb_tree_tag, tree_order_statistics_node_update> PBDS;
 
template <typename T>
std::ostream& operator <<(std::ostream& output, const pair <T, T> & data)
{
    output << "(" << data.x << "," << data.y << ")";
    return output;
}
template <typename T>
std::ostream& operator <<(std::ostream& output, const std::vector<T>& data)
{
    for (const T& x : data)
        output << x << " ";
    return output;
}
ll div_up(ll a, ll b) { return a/b+((a^b)>0&&a%b); } // divide a by b rounded up
ll div_down(ll a, ll b) { return a/b-((a^b)<0&&a%b); } // divide a by b rounded down 
ll math_mod(ll a, ll b) { return a - b * div_down(a, b); }
#define tcT template<class T
#define tcTU tcT, class U
tcT> using V = vector<T>; 
tcT> void re(V<T>& x) { 
    trav(a, x)
        cin >> a;
}
tcT> bool ckmin(T& a, const T& b) {
    return b < a ? a = b, 1 : 0; 
} // set a = min(a,b)
tcT> bool ckmax(T& a, const T& b) {
    return a < b ? a = b, 1 : 0; 
}
ll gcd(ll a, ll b) {
    while (b) {
        tie(a, b) = mp(b, a % b);
    }
    return a;
}
 
class Graph{
    int V;
    list<pair<int,int >> *l;
  public :
    Graph(int v){
        this->V = v;
        l = new list<pair<int,int> > [V+1];
    }
 
    void addEdge(int x,int y,int wt){
        l[x].push_back(make_pair(y,wt));
        l[y].push_back(make_pair(x,wt));
    }
    
    int dfs_helper(int node,bool *visited,int *count,int &ans){
            visited[node]  = true;
            count[node] = 1;
 
            for (auto nbr_pair:l[node]){
                int nbr = nbr_pair.first;
                int cost = nbr_pair.second;
 
                if (!visited[nbr]){
                    count[node] += dfs_helper(nbr,visited,count,ans);
                    int nx = count[nbr];
                    int ny = V-nx;
                    ans += (2*min(nx,ny))*cost;
                }
            }
        return count[node];
    }
 
    int dfs(int src){
        bool *visited = new bool[V+1];
        int *count = new int[V+1];
        visited[0] = false;
        count[0] = 0;
        for (int i=1;i<=V;i++){
            visited[i] = false;
            count[i] = 0;
        }
 
        int ans = 0;
        dfs_helper(src,visited,count,ans);
        
       // cout << ans <<"\n";
        return ans;
    }
 
};
signed main() {
   /* #ifdef ONLINE_JUDGE
    #define endl '\n'
    ios_base::sync_with_stdio(0); cin.tie(0);
    #endif */
     int t,h;
    cin >> t;
    h = 1;
    while (t--){
      int n; cin >> n;
      Graph g(n);
      
      int temp = n-1;
      while(temp--){
        int x,y,wt;
        cin >> x >> y >> wt;
        g.addEdge(x,y,wt);
      }
               cout<<"Case #"<<h<<": "<<g.dfs(n)<<endl;
               h++;
    }
}