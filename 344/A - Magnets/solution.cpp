#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
 
    string previous, current;
 
    cin >> previous;
 
    int groups = 1;
 
    for(int i = 1; i < n; i++) {
 
        cin >> current;
 
        if(current != previous) {
            groups++;
        }
 
        previous = current;
    }
 
    cout << groups;
 
    return 0;
}