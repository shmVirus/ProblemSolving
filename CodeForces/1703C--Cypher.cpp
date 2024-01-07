#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    int a[n+1];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1, b; i <= n; ++i) {
        cin >> b; char c;
        for (int j = 1; j <= b; ++j) {
            cin >> c;
            if (c == 'D') ++a[i];
            else --a[i];
            if (a[i] == -1) a[i] = 9;
            else if (a[i] == 10) a[i] = 0;
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << a[i] << " \n" [i == n];
    }
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
