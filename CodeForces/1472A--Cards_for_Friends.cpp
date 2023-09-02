#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int w, h, n; cin >> w >> h >> n;
    int res = 1;
    while (w % 2 == 0) {
        w /= 2;
        res *= 2;
    }
    while (h % 2 == 0) {
        h /= 2;
        res *= 2;
    }
    cout << (res >= n ? "YES" : "NO") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
