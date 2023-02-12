#include <iostream>
#include <cmath>
int main() {
    int n,m, x[3], y[3], t=0;
    char ch;
    std:: cin >> n >> m;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            std:: cin >> ch;
            if (ch == '*') {
                x[t] = i;
                y[t] = j;
                t++;
            }
        }
    }
    int i=0,j=0;
    if (x[0] == x[1] && y[0] == y[2]) {
        i = x[2];
        j = y[1];
    }
    if (x[0] == x[1] && y[1] == y[2]) {
        i = x[2];
        j = y[0];
    }
    if (x[1] == x[2] && y[0] == y[1]) {
        i = x[0];
        j = y[2];
    }
    if (x[1] == x[2] && y[0] == y[2]) {
        i = x[0];
        j = y[1];
    }
    std:: cout << i << " " << j << std:: endl;
    return 0;
}
