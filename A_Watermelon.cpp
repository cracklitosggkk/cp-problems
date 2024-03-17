#include <bits/stdc++.h>
#define endl "\n
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x;
    cout << (x >= 3 && x % 2 == 0 ? "YES" : "NO");
    return 0;
}