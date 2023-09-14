#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n,cnt[2]={0};
    cin >> n;
    for(int i=1,x; i<=n*2; ++i) cin >> x, cnt[x%2]++;
    if(cnt[0] == n) puts("Yes");
    else puts("No");
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
