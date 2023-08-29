#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    int res = 0;
    for (long long pw = 1; pw <= n; pw = pw * 10 + 1) {
        for (int d = 1; d <= 9;  d++) {
            if (pw * d <= n) {
                res++;
            }
        }
    }
    cout << res << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
