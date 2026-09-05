#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        ll k;
        cin >> n >> k;
 
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
 
        // d[i] = a[i] - i*k
        vector<ll> d(n);
 
        for (int i = 0; i < n; i++) {
            d[i] = a[i] - 1LL * i * k;
        }
 
        // Prefix sums of d
        vector<ll> pref(n + 1, 0);
 
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + d[i];
        }
 
        vector<ll> ans(n, 0);
 
        // Removing first or last element never breaks anything.
        ans[0] = 0;
        ans[n - 1] = 0;
 
        for (int i = 1; i < n - 1; i++) {
 
            // After removing i, the new left neighbour is i-1.
            // We need d[j] <= d[i-1] - k.
            ll threshold = d[i - 1] - k;
 
            int L = i + 1;
            int R = n;
 
            // Find first position j >= i+1
            // such that d[j] <= threshold.
            //
            // d[] is non-increasing.
            while (L < R) {
                int mid = (L + R) / 2;
 
                if (d[mid] > threshold)
                    L = mid + 1;
                else
                    R = mid;
            }
 
            int pos = L;
 
            // Positive reductions are for [i+1, pos-1].
            ll cnt = pos - (i + 1);
 
            if (cnt > 0) {
                ll sum = pref[pos] - pref[i + 1];
 
                ans[i] = sum - cnt * threshold;
            }
        }
 
        for (int i = 0; i < n; i++) {
            cout << ans[i] << (i + 1 == n ? '
' : ' ');
        }
    }
 
    return 0;
}