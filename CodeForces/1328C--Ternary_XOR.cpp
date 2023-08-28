#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    string x; cin >> x;
    string a(n, '0'), b(n, '0');
    for (int i = 0; i < n; ++i) {
        if (x[i] == '1') {
            a[i] = '1';
            b[i] = '0';
            for (int j = i + 1; j < n; ++j) {
                b[j] = x[j];
            }
            break;
        } else {
            a[i] = b[i] = '0' + (x[i] - '0') / 2;
        }
    }
    cout << a << nl << b << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
