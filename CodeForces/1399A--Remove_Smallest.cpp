#include <iostream>
int main (void) {
    int t;
    std:: cin >> t;
    for (int i=0; i<t; i++) {
        int n;
        std:: cin >> n;
        int a[n];
        for (int j=0; j<n; j++) {
            std:: cin >> a[j];
            int t = a[j];
            int k = j-1;
            while (k>=0 && a[k] > t) {
                a[k] = a[k] + a[k+1];
                a[k+1] = a[k] - a[k+1];
                a[k] = a[k] - a[k+1];
                k--;
            }
            a[k+1] = t;
        }
        bool isOkay = true;
        for (int j=1; j<n; j++) {
            if ( a[j-1] == a[j] || a[j-1]+1 == a[j]) continue;
            else {
                std:: cout << "NO\n";
                isOkay = false;
                break;
            }
        }
        if (isOkay) std:: cout << "YES\n";
    }
    return 0;
}
