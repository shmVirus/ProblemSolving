#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int a, b; cin >> a >> b;
    cout << (a == 0 ? 1 : a + b * 2 + 1) << nl;
}

int main (void) {
    FastIO;

    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();

    return 0;
}