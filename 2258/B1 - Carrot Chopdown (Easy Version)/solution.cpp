#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<int> freq(m + 1);
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }
 
        // suffix[i] = number of carrots with length >= i
        vector<int> suffix(m + 2, 0);
 
        for (int i = m; i >= 1; i--) {
            suffix[i] = suffix[i + 1] + freq[i];
        }
 
        int ans = 0;
 
        for (int len = 1; len <= m; len++) {
            // Existing carrots of length len
            int cur = freq[len];
 
            // Every carrot > len can produce one carrot of length len
            cur += suffix[len + 1];
 
            // A carrot of length 2*len produces TWO carrots of length len,
            // so we need one additional count.
            if (2 * len <= m)
                cur += freq[2 * len];
 
            ans = max(ans, cur);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}