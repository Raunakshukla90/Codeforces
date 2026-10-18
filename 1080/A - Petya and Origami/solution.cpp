#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    int red = (2 * n + k - 1) / k;
    int green = (5 * n + k - 1) / k;
    int blue = (8 * n + k - 1) / k;
 
    cout << red + green + blue << endl;
 
    return 0;
}