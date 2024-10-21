#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    int ans = 0;
    int arr[n+1];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    for (int j = 0; j < m; j++) {
        cin >> x;
        for (int i = 0; i < n; i++) {
            if ((x + arr[i]) <= k) ans++;
        }
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
