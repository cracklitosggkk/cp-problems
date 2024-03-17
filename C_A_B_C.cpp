#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x;
    vector<int> v1(x);
    for (auto &m : v1) cin >> m;
    int y;
    cin >> y;
    vector<int> v2(y);
    for (auto &m : v2) cin >> m;
    int z;
    cin >> z;
    vector<int> v3(z);
    for (auto &m : v3) cin >> m;
    set<int> s;
    for (int a : v1) {
        for (int b : v2) {
            for (int c : v3) {
                s.insert(a + b + c);
            }
        }
    }
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        cout << (s.count(x) ? "Yes" : "No") << endl;
    }
    return 0;
}