#include <iostream>
int main() {
    int n, t, res[101];
    std:: cin >> n;
    for (int i=0; i<n; i++) {
        std:: cin >> t;
        res[t] = i+1;
    }
    for (int i=1; i<=n; i++) {
        std:: cout << res[i];
        if (i!=n) {
            std:: cout << " ";
        }
        else {
            std:: cout << std:: endl;
        }
    }
    return 0;
}