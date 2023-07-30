#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    int ntH = 0;    // ntH = not happy

    for (int i=1; i<=n; ++i) {
        int p; cin >> p;
        if (i == p) ++ntH;
    }

    cout << (ntH % 2 ? ntH / 2 + 1 : ntH / 2) << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
