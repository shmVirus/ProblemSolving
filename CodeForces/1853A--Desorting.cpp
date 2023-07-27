#include <bits/stdc++.h>
using namespace std;


#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    int x, y; cin >> x;
    int diff = INT_MAX;
    bool sorted = true;

    for (int i=1; i<n; ++i) {
        cin >> y;
	diff = min(y-x, diff);
	sorted &= y>=x;
	x = y;
    }

    cout << (sorted ? diff/2+1 : 0) << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
