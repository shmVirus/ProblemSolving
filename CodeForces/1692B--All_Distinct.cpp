#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, x; cin >> n;
	set<int> a;
	for(int i=0; i<n; ++i) {
		cin >> x; a.insert(x);
	}
	if((n-a.size())%2 == 0) {
		cout << a.size() << nl;
	} else {
		cout << a.size()-1 << endl;
	}
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
