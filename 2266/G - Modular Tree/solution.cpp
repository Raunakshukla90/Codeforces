#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
 
        // BFS order from root 1, record parents
        vector<int> par(n + 1, 0), order;
        order.reserve(n);
        order.push_back(1);
        for (int idx = 0; idx < (int)order.size(); idx++) {
            int u = order[idx];
            for (int v : adj[u]) {
                if (v != par[u]) {
                    par[v] = u;
                    order.push_back(v);
                }
            }
        }
 
        vector<ll> sumA(n + 1, 0), G(n + 1, 0);
        ll ans = 0;
        for (int idx = n - 1; idx >= 0; idx--) {
            int u = order[idx];
            ll g = __gcd(b[u], __gcd(sumA[u] % b[u], G[u]));
            // gcd(b, 0) = b, so a leaf (or all-fixed children with sum 0) gives g = b
            ans += b[u] - g + a[u] % g;
            int p = par[u];
            if (p) {
                sumA[p] += a[u];
                if (g < b[u]) G[p] = __gcd(G[p], g);
            }
        }
        cout << ans << "
";
    }
    return 0;
}