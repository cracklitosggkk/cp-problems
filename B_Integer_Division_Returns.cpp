#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long X;
    cin >> X;
    if ((X + 9) < 0 and (X + 9) % 10 != 0) {
        cout << (X + 9) / 10 - 1 << endl;
    } else {
        cout << (X + 9) / 10 << endl;
    }
    return 0;
}