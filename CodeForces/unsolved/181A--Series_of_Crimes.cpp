#include <iostream>
#include <cmath>
int main() {
    int n,m, x[5], y[5], t=0;
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
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if ((abs(((x[0]-x[1])*(x[0]-x[1]))-((y[0]-y[1])*(y[0]-y[1])))) == (abs(((x[2]-i)*(x[2]-i))-((y[2]-j)*(y[2]-j)))) && (((x[0]-x[1])*(x[0]-x[1]))+((y[0]-y[1])*(y[0]-y[1]))) == (((x[2]-i)*(x[2]-i))+((y[2]-j)*(y[2]-j)))) {
                std:: cout << i << " " << j << std:: endl;
                return 0;
            }
        }
    }
    return 0;
}
