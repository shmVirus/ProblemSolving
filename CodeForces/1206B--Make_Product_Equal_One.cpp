#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int n; cin >> n;
    long long ans = 0, zeros = 0, negs = 0;
    for (int i=0, a; i<n; ++i) {
        cin >> a;
        if (!a) zeros += 1;
        else if (a > 0) ans += a-1;
        else {
            ans += -a-1;
            negs += 1;
        }
    }
    if (zeros) ans += zeros;
    else if (negs%2 == 1) ans += 2;
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
