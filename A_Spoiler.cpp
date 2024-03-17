#include <bits/stdc++.h>
#define endl "\n
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int x = s.find('|'), y = s.rfind('|');
    cout << s.substr(0, x) + s.substr(y + 1);
    return 0;
}