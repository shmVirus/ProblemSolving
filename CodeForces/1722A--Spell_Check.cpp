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
    int t,n; string s; cin >> t;
    while (t--) {
        int a[5]={0}, x=0;
        cin >> n >> s;
        for (int i=0; i<n && n==5; i++) {
            if (s[i]=='T') a[0]++;
            else if (s[i]=='i') a[1]++;
            else if (s[i]=='m') a[2]++;
            else if (s[i]=='u') a[3]++;
            else if (s[i]=='r') a[4]++;
            else x++;
        }
        if (a[0]==1 && a[1]==1 && a[2]==1 && a[3]==1 && a[4]==1 && x==0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
