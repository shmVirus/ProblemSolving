// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define NL cout << "\n";
#define NO cout << "NO\n";
#define YES cout << "YES\n";

void solution();

int main (void) {
    //FastIO;
    solution();
    return 0;
}
void solution () {
    int t,n,c; cin >> t; string a;
    while (t--) {
        cin >> n; c=0; set<string>x,y,z;
        for(int i=0; i<n; i++){
            cin>>a; x.insert(a);
        }
        for(int i=0; i<n; i++){
            cin>>a; y.insert(a);
        }
        for(int i=0; i<n; i++){
            cin>>a; z.insert(a);
        }
        for(string d: x) {
            if(y.count(d) && z.count(d)) continue;
            else if(y.count(d) || z.count(d)) c++;
            else c+=3;
        }
        cout << c << " "; c=0;
        for(string d:y) {
            if(x.count(d) && z.count(d)) continue;
            else if(x.count(d) || z.count(d)) c++;
            else c+=3;
        }
        cout << c << " "; c=0;
        for(string d:z) {
            if(x.count(d) && y.count(d)) continue;
            else if(x.count(d) || y.count(d)) c++;
            else c+=3;
        }
        cout << c <<"\n";
    }
}
