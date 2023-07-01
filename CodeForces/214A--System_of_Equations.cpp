#include <iostream>
int main() {
    int n, m, t=0;
    std:: cin >> n >> m;
    for(int i=0; i<=n; i++) {
        for (int j=0; j<=m; j++) {
            if ((i*i)+j==n && i+(j*j)==m) {
                t++;
            }
        }
    }
    std:: cout << t << std:: endl;
    return 0;
}
