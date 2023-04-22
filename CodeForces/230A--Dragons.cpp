// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define NL cout << "\n";
#define NO cout << "NO\n";
#define YES cout << "YES\n";

void solution();

int main (void) {
    FastIO;
    solution();
    return 0;
}
void solution () {
    int s, n, x,y; cin >> s >> n;
    vector < pair <int,int> > v;
    for (int i=0; i<n; i++) {
        cin >> x >> y;
        v.push_back( make_pair(x,y) );
    }
    sort(v.begin(), v.end());
    for (int i=0; i<n; i++) {
        if (s<=v[i].first) {
            NO;
            return;
        } else {
            s += v[i].second;
        }
    }
    YES;
}
