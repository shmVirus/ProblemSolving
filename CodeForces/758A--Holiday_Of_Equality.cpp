#include <iostream>
int main (void) {
    int n;
    std:: cin >> n;
    int a[n];
    std:: cin >> a[0];
    int mx = a[0];
    for (int i=1; i<n; i++) {
        std:: cin >> a[i];
        if (a[i] > mx) mx = a[i];
    }
    long long int s = 0;
    for (int i=0; i<n; i++) {
        if (a[i] < mx) s += mx - a[i];
    }
    std:: cout << s << std:: endl;
    return 0;
}
