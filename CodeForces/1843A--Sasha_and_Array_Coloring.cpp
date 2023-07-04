#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    vector<int> a(n);

    for (int i=0; i<n; ++i) cin >> a[i];
    sort(a.begin(), a.end());

    int cost = 0;

    for (int i=0, j=n-1; i<(n/2); ) {
        cost += a[j--] - a[i++];
    }
    cout << cost << nl;
}


int main (void) {

    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();

    return 0;
}
