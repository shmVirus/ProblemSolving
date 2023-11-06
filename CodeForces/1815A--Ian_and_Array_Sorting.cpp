#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n; long long sum = 0;
    for (int i=0, x; i<n; ++i) {
        cin >> x;
        i % 2 ? sum += x+0LL : sum -= x-0LL;
    }
    cout << (n % 2 || sum >= 0 ? "YES" : "NO") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
