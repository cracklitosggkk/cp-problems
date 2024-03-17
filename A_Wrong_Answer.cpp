#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin >> a >> b;
    int sum = a + b;
    cout << (sum == 9 ? sum - 1 : sum + 1);
    return 0;
}