#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n; int a[n+1];
    for (int i=1; i<=n; ++i) cin>>a[i];
	sort(a+1,  a+n+1);
	int ans = 2e9;
	for (int i=3; i<=n; ++i){
		ans = min(ans, a[i]-a[i-2]);
	}
	cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
