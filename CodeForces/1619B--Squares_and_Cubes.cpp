#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    set<int> a;
    for (int i = 1, j = i*i; j <= n; ++i) {
        a.insert(j);
        j = i * i;
    }
    for (int i = 1, j = i*i*i; j <= n; ++i) {
        a.insert(j);
        j = i * i * i;
    }
    cout << a.size() << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
