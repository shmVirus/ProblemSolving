#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int k; cin >> k;
    int a[12]; for (int i=0; i<12; ++i) cin >> a[i];
    sort(a, a+12);
    int ans = 0;
    for (int i=11; i>=0 && k>0; --i) {
        k -= a[i];
        ++ans;
    }
    cout << (k <= 0 ? ans : -1) << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
