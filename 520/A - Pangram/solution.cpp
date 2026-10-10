#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    bool seen[26] = {false};
//convert all in lower 
    for (char c : s) {
        c = tolower(c);
        seen[c - 'a'] = true;
    }
 
    for (int i = 0; i < 26; i++) {
        if (!seen[i]) {
            cout << "NO
";
            return 0;
        }
    }
 
    cout << "YES
";
    return 0;
}