#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    set<char> distinctChars(s.begin(), s.end());
 
    if (distinctChars.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
 
    return 0;
}