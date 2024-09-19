#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> count(n + 1);
    for (int i = 0; i < 4 * n - 1; ++i) {
        int a;
        cin >> a;
        count[a] += 1;
    }
    for (int i = 1; i <= n; ++i) {
        if (count[i] == 3) {
            cout << i << '\n';
        }
    }
    return 0;
}
