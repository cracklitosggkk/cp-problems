#include <bits/stdc++.h>
#define endl "\n
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int a = s[0] == '<';
    int b = s[s.size() -1] == '>';
    int c = 1;
    for (int i = 1; i < s.size() - 1; i++) {
        if (s[i] != '=') {
            c = 0;
            break;
        }
    }
    cout << (a && b && c ? "Yes" : "No");
}