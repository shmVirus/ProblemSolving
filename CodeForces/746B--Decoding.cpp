// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl cout << "\n";
#define no cout << "NO\n";
#define yes cout << "YES\n";

void solution();

int main (void) {
    FastIO;
    solution();
    return 0;
}
void solution () {
    int n; cin >> n;
    string s; cin >> s; char a[n];
    for (int i=n-1, l=0, r=n-1, x=1; i>=0; i--) {
        if (x==1) {
            a[r--] = s[i]; x = 0;
        } else {
            a[l++] = s[i]; x = 1;
        }
    }
    a[n]='\0';
    cout << a << '\n';
}
